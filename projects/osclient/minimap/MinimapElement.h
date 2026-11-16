// projects/osclient/minimap/MinimapElement.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: osclient

namespace jag::oldscape {
    class MinimapElement {
    public:
        ~MinimapElement();
        MinimapElement* operator=(MinimapElement const&);

        // data members, from how the methods use this: 24 bytes
        undefined8 field_0; // offset 0
        undefined4 field_8; // offset 8
        char _unknown_12[12];
    };

    // 0x1000694d0, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // MinimapElement::~MinimapElement(): jumps straight to the base-object destructor

    // 0x1000694d0: the linker folded this into MinimapElement::~MinimapElement(), which has identical code
    InterfaceMouseEvent::~InterfaceMouseEvent();

    // 0x10006a950, 48 bytes, inline, placed by class name
    // MinimapElement::operator=(MinimapElement const&)
    /* MinimapElement::TEMPNAMEPLACEHOLDERVALUE(MinimapElement const&) */

    MinimapElement* MinimapElement::operator=(MinimapElement* param_1) {
        field_8 = param_1->field_8;
        field_0 = param_1->field_0;
        shared_ptr<graphics::Pix32>::operator=((shared_ptr<graphics::Pix32>*)&field_16,
                                               (shared_ptr*)&param_1->field_16);
        return this;
    }

    // 0x1000782e0, 16 bytes, base-object destructor, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // MinimapElement::~MinimapElement()
    /* eastl::ListNode<shared_ptr<ClientObj> >::~ListNode() */

    void eastl::ListNode<shared_ptr<ClientObj>>::~ListNode() {
        ((this + 16))->~shared_ptr();
    }

    // 0x1000782e0: the linker folded this into MinimapElement::~MinimapElement(), which has identical code
    InterfaceMouseEvent::~InterfaceMouseEvent();

} // namespace jag::oldscape
