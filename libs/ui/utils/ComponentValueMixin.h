// libs/ui/utils/ComponentValueMixin.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: osclient

namespace jag::ui {
    class ComponentValueMixin {
    public:
        // virtual methods in vtable order
        virtual ~ComponentValueMixin();
        virtual GetValueRepresentationType() const;
        ComponentValueMixin();

        // data members, from how the methods use this: 8 bytes
        undefined* field_0; // offset 0, vtable pointer
    };

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    ComponentValueMixin::~ComponentValueMixin();

    // 0x100029ea0: the linker folded this into oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long), which has identical code
    ComponentValueMixin::GetValueRepresentationType() const;

    // 0x10002a770: the linker folded this into void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*), which has identical code
    ComponentValueMixin::~ComponentValueMixin();

    // 0x10004af40: the linker folded this into std::__function::__func<std::__bind<void (oldscape::Client::*)(), oldscape::Client*&>, std::allocator<std::__bind<void (oldscape::Client::*)(), oldscape::Client*&> >, void (oldscape::ClientWindowMode)>::~__func(), which has identical code
    ComponentValueMixin::~ComponentValueMixin();

    // 0x100688e70, 48 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ComponentSingleValueMixin::ComponentSingleValueMixin()
    void ComponentSingleValueMixin::ComponentSingleValueMixin() {
        new (this) ComponentValueMixin();
        field_0 = PTR_vtable_100ee7da0 + 16;
    }

    // 0x1006af640, 32 bytes, base-object constructor, inline, placed by class name
    // ComponentValueMixin::ComponentValueMixin()
    void ComponentValueMixin::ComponentValueMixin() {
        field_0 = PTR_vtable_100ee7d90 + 16;
    }

} // namespace jag::ui
