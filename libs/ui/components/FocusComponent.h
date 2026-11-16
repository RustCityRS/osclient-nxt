// libs/ui/components/FocusComponent.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: osclient

namespace jag::ui {
    class FocusComponent {
    public:
        // virtual methods in vtable order
        virtual ~FocusComponent();
        virtual DelayedStream* GetAssociatedComponent();
        virtual uint64_t HandleKeyInput(int arg1, int arg2, unsigned int arg3);
        bool IsKeyReceiver() const;
        bool IsAssociatedComponent(const shared_ptr<Component>& arg1) const;
        uint8_t NotifyFocusGain();
        FocusComponent();
    };

    // 0x100009e70: FocusComponent::~FocusComponent() has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100029ea0: FocusComponent::HandleKeyInput(int, int, unsigned int) has the same machine code as oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long)

    // 0x100029ea0: FocusComponent::IsKeyReceiver() const has the same machine code as oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long)

    // 0x100029ea0: FocusComponent::IsAssociatedComponent(shared_ptr<Component> const&) const has the same machine code as oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long)

    // 0x10002d860: FocusComponent::NotifyFocusGain() has the same machine code as oldscape::option::Option<int>::IsValidValue(int const&) const

    // 0x1002a75f0: FocusComponent::GetAssociatedComponent() has the same machine code as oldscape::sound::DelayedStream::SubstreamStart()

    // 0x10068d830
    FocusComponent::FocusComponent() {}

} // namespace jag::ui
