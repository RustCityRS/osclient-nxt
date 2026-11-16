// libs/ui/utils/ComponentValueMixin.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: osclient

namespace jag::ui {
    class ComponentValueMixin {
    public:
        // virtual methods in vtable order
        virtual ~ComponentValueMixin();
        virtual uint64_t GetValueRepresentationType() const;
        ComponentValueMixin();
    };

    // 0x100009e70: ComponentValueMixin::~ComponentValueMixin() has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100029ea0: ComponentValueMixin::GetValueRepresentationType() const has the same machine code as oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long)

    // 0x100688e70
    ComponentSingleValueMixin::ComponentSingleValueMixin() : ComponentValueMixin() {}

    // 0x1006af640
    ComponentValueMixin::ComponentValueMixin() {}

} // namespace jag::ui
