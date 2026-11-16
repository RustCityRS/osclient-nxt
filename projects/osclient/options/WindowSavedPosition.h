// projects/osclient/options/WindowSavedPosition.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: osclient

namespace jag::oldscape {
    class WindowSavedPosition {
    public:
        GetPacket() const;
        WindowSavedPosition();
        PacketJ<Array<unsigned char, eastl::allocator>>* operator=(WindowSavedPosition&&);
        WindowSavedPosition(PacketT<Array<unsigned char, eastl::allocator>>&&);
        WindowSavedPosition(WindowSavedPosition const&);
        WindowSavedPosition(PacketT<Array<unsigned char, eastl::allocator>> const&);
        WindowSavedPosition* operator=(WindowSavedPosition const&);
        ~WindowSavedPosition();

        // data members, from how the methods use this: 32 bytes
        char _unknown_0[24];
        undefined8 field_24; // offset 24
    };

    // 0x100009ca0: the linker folded this into eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first(), which has identical code
    WindowSavedPosition::GetPacket() const;

    // 0x100021d90, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // WindowSavedPosition::WindowSavedPosition(): jumps straight to the base-object constructor

    // 0x10002d5d0, 16 bytes, base-object constructor, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // WindowSavedPosition::WindowSavedPosition()
    /* PacketJ<Array<unsigned char, eastl::allocator> >::PacketJ() */

    void
    PacketJ<Array<unsigned char, eastl::allocator>>::PacketJ(PacketJ<Array<unsigned char, eastl::allocator>>* this) {
        new (this) PacketT<Array<unsigned char, eastl::allocator>>();
    }

    // 0x100049920, 32 bytes, inline, placed by class name
    // WindowSavedPosition::operator=(WindowSavedPosition&&)
    /* PacketJ<Array<unsigned char, eastl::allocator>
   >::TEMPNAMEPLACEHOLDERVALUE(PacketJ<Array<unsigned char, eastl::allocator>
   >&&) */

    PacketJ<Array<unsigned char, eastl::allocator>>*
    PacketJ<Array<unsigned char, eastl::allocator>>::operator=(PacketJ<Array<unsigned char, eastl::allocator>>* this,
                                                               PacketJ* param_1) {
        PacketT<Array<unsigned char, eastl::allocator>>::operator=(
            (PacketT<Array<unsigned char, eastl::allocator>>*)this, (PacketT*)param_1);
        return this;
    }

    // 0x100049ac0, 16 bytes, complete-object constructor, inline, placed by class name
    // WindowSavedPosition::WindowSavedPosition(PacketT<Array<unsigned char, eastl::allocator> >&&): jumps straight to the base-object constructor

    // 0x100049d80, 16 bytes, base-object constructor, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // WindowSavedPosition::WindowSavedPosition(PacketT<Array<unsigned char, eastl::allocator> >&&)
    /* PacketJ<Array<unsigned char, eastl::allocator>
   >::PacketJ(PacketJ<Array<unsigned char, eastl::allocator> >&&) */

    void PacketJ<Array<unsigned char, eastl::allocator>>::PacketJ(PacketJ<Array<unsigned char, eastl::allocator>>* this,
                                                                  PacketJ* param_1) {
        new (this) PacketT<Array<unsigned char, eastl::allocator>>(param_1);
    }

    // 0x10012dcc0, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // WindowSavedPosition::WindowSavedPosition(WindowSavedPosition const&): jumps straight to the base-object constructor

    // 0x10012dcc0: the linker folded this into WindowSavedPosition::WindowSavedPosition(WindowSavedPosition const&), which has identical code
    WindowSavedPosition::WindowSavedPosition(PacketT<Array<unsigned char, eastl::allocator>> const&);

    // 0x10012dcd0, 32 bytes, inline, placed by class name and debug map
    // WindowSavedPosition::operator=(WindowSavedPosition const&)
    /* WindowSavedPosition::TEMPNAMEPLACEHOLDERVALUE(WindowSavedPosition
   const&) */

    WindowSavedPosition* WindowSavedPosition::operator=(WindowSavedPosition* param_1) {
        if (this != param_1) {
            PacketT<Array<unsigned char, eastl::allocator>>::operator=(
                (PacketT<Array<unsigned char, eastl::allocator>>*)this, (PacketT*)param_1);
        }
        return this;
    }

    // 0x10012dcf0, 16 bytes, base-object constructor, inline, placed by class name and debug map
    // WindowSavedPosition::WindowSavedPosition(WindowSavedPosition const&)
    /* WindowSavedPosition::WindowSavedPosition(PacketT<Array<unsigned char,
   eastl::allocator> > const&) */

    void WindowSavedPosition::WindowSavedPosition(PacketT* param_1) {
        new (this) PacketT<Array<unsigned char, eastl::allocator>>(param_1);
    }

    // 0x10012dcf0: the linker folded this into WindowSavedPosition::WindowSavedPosition(WindowSavedPosition const&), which has identical code
    WindowSavedPosition::WindowSavedPosition(PacketT<Array<unsigned char, eastl::allocator>> const&);

    // 0x10012de10, 16 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // InputFieldLayoutParams::InputFieldLayoutParams()
    void InputFieldLayoutParams::InputFieldLayoutParams() {
        field_24 = 0;
        field_32 = 0;
    }

    // 0x10012e0e0, 16 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // InterfaceMouseEvent::InterfaceMouseEvent()
    /* UISceneSettings::UISceneSettings() */

    void UISceneSettings::UISceneSettings() {
        _func_decltype_nullptr* in_RSI;

        new (&field_16, in_RSI) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
    }

    // 0x10012e0f0, 32 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // InterfaceMouseEvent::InterfaceMouseEvent(InterfaceMouseEvent const&)
    /* render::RenderContextDesc::RenderContextDesc(render::RenderContextDesc const&) */

    void render::RenderContextDesc::RenderContextDesc(RenderContextDesc* param_1) {
        undefined4 uVar1;

        field_8 = param_1->field_8;
        uVar1 = param_1->field_4;
        field_0 = param_1->field_0;
        field_4 = uVar1;
        new (&field_16, (shared_ptr*)&param_1->field_16) shared_ptr<dash3d::Decor>();
    }

    // 0x10012e230, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // HiddenEntityInfo::HiddenEntityInfo(ClientEntityID&&, ClientEntityID&&)
    void HiddenEntityInfo::HiddenEntityInfo(ClientEntityID* param_1, ClientEntityID* param_2) {
        undefined2 uVar1;
        int iVar2;

        new (this) ClientEntityID();
        new (field_8) ClientEntityID();
        uVar1 = *(undefined2*)&param_1->field_2;
        iVar2 = param_1->field_4;
        field_0 = param_1->field_0;
        field_2 = uVar1;
        field_4 = iVar2;
        uVar1 = *(undefined2*)&param_2->field_2;
        iVar2 = param_2->field_4;
        *(undefined2*)(field_8 + 0) = param_2->field_0;
        *(undefined2*)(field_8 + 2) = uVar1;
        *(int*)(field_8 + 4) = iVar2;
    }

    // 0x100183720: the linker folded this into PacketJ<Array<unsigned char, eastl::allocator> >::~PacketJ(), which has identical code
    WindowSavedPosition::~WindowSavedPosition();

    // 0x10018a060, 16 bytes, complete-object destructor, inline, placed by class name
    // WindowSavedPosition::~WindowSavedPosition(): jumps straight to the base-object destructor

} // namespace jag::oldscape

namespace jag::oldscape::rs2lib {
    // 0x10012dd80, 32 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // TempSetUsingRSeven::TempSetUsingRSeven(bool)
    void TempSetUsingRSeven::TempSetUsingRSeven(bool param_1) {
        *this = dash3d::g_usingRSeven;
        dash3d::g_usingRSeven = (TempSetUsingRSeven)param_1;
    }

    // 0x10012dda0, 32 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // TempSetUsingRSeven::~TempSetUsingRSeven()
    void TempSetUsingRSeven::~TempSetUsingRSeven() {
        dash3d::g_usingRSeven = *this;
    }

} // namespace jag::oldscape::rs2lib

namespace jag {
    // 0x10012ddc0, 16 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // RenderableOverlay::RenderableOverlay()
    /* game::GamepadEvent::GamepadEvent() */

    void game::GamepadEvent::GamepadEvent() {
        field_0 = 0;
        field_4 = 0;
    }

    // 0x10012e0e0: the linker folded this into oldscape::InterfaceMouseEvent::InterfaceMouseEvent(), which has identical code
    UISceneSettings::UISceneSettings();

} // namespace jag

namespace jag::game {
    // 0x10012ddc0: the linker folded this into RenderableOverlay::RenderableOverlay(), which has identical code
    GamepadEvent::GamepadEvent();

} // namespace jag::game
