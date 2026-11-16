// projects/osclient/minimap/MinimapElement.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: osclient

namespace jag::oldscape {
    class MinimapElement {
    public:
        ~MinimapElement();
        MinimapElement* operator=(const MinimapElement& minimapElement);

    private:
        uint64_t field_0;
        uint32_t field_8;
        uint8_t _unknown_12[12];
    };

    // 0x10006a950
    MinimapElement* MinimapElement::operator=(const MinimapElement& minimapElement) {
        field_8 = minimapElement.field_8;
        field_0 = minimapElement.field_0;
        field_16 = minimapElement.field_16;
        return this;
    }

    // 0x1000782e0
    MinimapElement::~MinimapElement() {
        ((this + 16))->~shared_ptr();
    }

    // 0x1000782e0: InterfaceMouseEvent::~InterfaceMouseEvent() has the same machine code as MinimapElement::~MinimapElement()

} // namespace jag::oldscape
