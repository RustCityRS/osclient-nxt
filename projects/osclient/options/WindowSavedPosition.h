// projects/osclient/options/WindowSavedPosition.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: osclient

namespace jag::oldscape {
    class WindowSavedPosition {
    public:
        void GetPacket() const;
        WindowSavedPosition();
        PacketJ<Array<unsigned char>>* operator=(WindowSavedPosition&& windowSavedPosition);
        WindowSavedPosition(PacketT<Array<unsigned char>>&& arg1);
        WindowSavedPosition(const WindowSavedPosition& windowSavedPosition);
        WindowSavedPosition(const PacketT<Array<unsigned char>>& windowSavedPosition);
        WindowSavedPosition* operator=(const WindowSavedPosition& windowSavedPosition);
        ~WindowSavedPosition();

    private:
        uint8_t _unknown_0[24];
        uint64_t field_24;
    };

    // 0x100009ca0: WindowSavedPosition::GetPacket() const has the same machine code as eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first()

    // 0x10002d5d0
    WindowSavedPosition::WindowSavedPosition() : PacketT() {}

    // 0x100049920
    PacketJ<Array<unsigned char>>* WindowSavedPosition::operator=(WindowSavedPosition&& windowSavedPosition) {
        *this = windowSavedPosition;
        return this;
    }

    // 0x100049d80
    WindowSavedPosition::WindowSavedPosition(PacketT<Array<unsigned char>>&& arg1) : PacketT(arg1) {}

    // 0x10012dcd0
    WindowSavedPosition* WindowSavedPosition::operator=(const WindowSavedPosition& windowSavedPosition) {
        if (this != windowSavedPosition) {
            *this = windowSavedPosition;
        }
        return this;
    }

    // 0x10012dcf0
    WindowSavedPosition::WindowSavedPosition(const WindowSavedPosition& windowSavedPosition)
        : PacketT(windowSavedPosition) {}

    // 0x10012dcf0: WindowSavedPosition::WindowSavedPosition(PacketT<Array<unsigned char>> const&) has the same machine code as WindowSavedPosition::WindowSavedPosition(WindowSavedPosition const&)

    // 0x10012de10
    InputFieldLayoutParams::InputFieldLayoutParams() : field_24(0), field_32(0) {}

    // 0x10012e0e0
    InterfaceMouseEvent::InterfaceMouseEvent() {
        new (&field_16) shared_ptr();
    }

    // 0x10012e0f0
    InterfaceMouseEvent::InterfaceMouseEvent(const InterfaceMouseEvent& interfaceMouseEvent)
        : field_8(interfaceMouseEvent.field_8) {
        uint32_t uVar1 = *(uint32_t*)((long)&interfaceMouseEvent.field_0 + 4);
        field_0 = *(uint32_t*)&interfaceMouseEvent.field_0;
        field_4 = uVar1;
        new (&field_16) shared_ptr(&interfaceMouseEvent.field_16);
    }

    // 0x10012e230
    HiddenEntityInfo::HiddenEntityInfo(ClientEntityID&& clientEntityID1, ClientEntityID&& clientEntityID2)
        : ClientEntityID() {
        uint16_t uVar1 = *(uint16_t*)&clientEntityID1.field_2;
        int iVar2 = clientEntityID1.m_slotID;
        field_0 = clientEntityID1.field_0;
        field_2 = uVar1;
        field_4 = iVar2;
        uVar1 = *(uint16_t*)&clientEntityID2.field_2;
        iVar2 = clientEntityID2.m_slotID;
        *(uint16_t*)(field_8 + 0) = clientEntityID2.field_0;
        *(uint16_t*)(field_8 + 2) = uVar1;
        *(int*)(field_8 + 4) = iVar2;
    }

    // 0x100183720: WindowSavedPosition::~WindowSavedPosition() has the same machine code as PacketJ<Array<unsigned char>>::~PacketJ()

} // namespace jag::oldscape

namespace jag::oldscape::rs2lib {
    // 0x10012dd80
    TempSetUsingRSeven::TempSetUsingRSeven(bool arg1) {
        *this = dash3d::g_usingRSeven;
        dash3d::g_usingRSeven = (TempSetUsingRSeven)arg1;
    }

    // 0x10012dda0
    TempSetUsingRSeven::~TempSetUsingRSeven() {
        dash3d::g_usingRSeven = *this;
    }

} // namespace jag::oldscape::rs2lib

namespace jag {
    // 0x10012ddc0
    RenderableOverlay::RenderableOverlay() : field_0(0), field_4(0) {}

    // 0x10012e0e0: UISceneSettings::UISceneSettings() has the same machine code as oldscape::InterfaceMouseEvent::InterfaceMouseEvent()

} // namespace jag

namespace jag::game {
    // 0x10012ddc0: GamepadEvent::GamepadEvent() has the same machine code as RenderableOverlay::RenderableOverlay()

} // namespace jag::game
