// projects/osclient/ClientInputHandler.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape {
    class ClientInputHandler {
    public:
        // virtual methods in vtable order
        virtual KeyPressed(int, unsigned long long);
        virtual KeyRepeat(int, unsigned long long);
        virtual KeyReleased(int, unsigned long long);
        virtual KeyTyped(char16_t, unsigned long long);
        virtual PointerPress(int, int, int, int, unsigned long long);
        virtual PointerRelease(int, int, int, int, unsigned long long);
        virtual PointerDrag(int, int, int, unsigned long long);
        virtual MouseMove(int, int, unsigned long long);
        virtual PointerCancel(int, int, unsigned long long);
        virtual WheelScroll(int, unsigned long long);
        virtual KeyboardInputFocusChange(int, unsigned long long);
        virtual TextCommandReceived(int, unsigned long long);
        virtual void ResetState();
        virtual OnLowLevelMouseDown(int, int, int, int);
        ClientInputHandler();
        ~ClientInputHandler();
        KeyHeld(int) const;
        bool AllowDragGameScreen();
        int GetKeysDown() const;
        int* GetKeysUp() const;
        KeyDown(int) const;
        KeyUp(int) const;
        void Init();
        void SetScreenDPI(int);
        void CheckMoveToRest();
        GetFlickVerticalVelocity();
        GetFlickHorizontalVelocity();
        void UpdateDragDeadZonePixels();
        void ResetOnLogin();
        void ResetMouseWatchClick();
        void RequestMinimenuBuild();
        void SetMinimenuBuildCoords(CoordType<UICoordSpecializer>, CoordType<UICoordSpecializer>);
        void ServicePreDispatch();
        void SetCurrentAction(InputAction);
        void ResetDragAction();
        void ResetMinimenuBuildCoords();
        bool PrimaryOpOnPress();
        void AdvanceBuildingMinimenuState();
        void TrySwitchToDrag(unsigned long long, bool);
        void RecordMouseWatchClick(CoordType<UICoordSpecializer>, CoordType<UICoordSpecializer>, unsigned long long,
                                   bool);
        void GetPointerLastDistance(int, int);
        void GetPointerLastAngle(int, int);
        void RecordMouseWatchMove(CoordType<UICoordSpecializer>, CoordType<UICoordSpecializer>, unsigned long long);
        ulong IsDragDeadZoneExceeded(CoordType<UICoordSpecializer>, CoordType<UICoordSpecializer>);
        IsMouseButtonPressed(int);
        void ResetPointers();
        IsDragging() const;

        // data members, from how the methods use this: 10560 bytes
        undefined** field_0; // offset 0, vtable pointer
        uint field_8;        // offset 8
        uint field_12;       // offset 12
        int field_16;        // offset 16
        int field_20;        // offset 20
        ulonglong field_24;  // offset 24
        char _unknown_32[64];
        undefined4 m_minimenuBuildCoords; // offset 96
        undefined4 field_100;             // offset 100
        byte field_104;                   // offset 104
        char field_105;                   // offset 105
        undefined1 field_106;             // offset 106
        bool field_107;                   // offset 107
        char field_108;                   // offset 108
        undefined1 field_109;             // offset 109
        undefined1 field_110;             // offset 110
        char _unknown_111[1];
        ulong field_112; // offset 112
        char _unknown_120[768];
        int m_keysDown; // offset 888
        char _unknown_892[548];
        int m_keysUp; // offset 1440
        char _unknown_1444[548];
        undefined4 field_1992; // offset 1992
        undefined4 field_1996; // offset 1996
        int field_2000;        // offset 2000
        int field_2004;        // offset 2004
        undefined1 field_2008; // offset 2008
        char _unknown_2009[7];
        undefined8 field_2016; // offset 2016
        uint field_2024;       // offset 2024
        char _unknown_2028[8004];
        uint field_10032;       // offset 10032
        undefined1 field_10036; // offset 10036
        char _unknown_10037[3];
        undefined4 field_10040; // offset 10040
        undefined4 field_10044; // offset 10044
        undefined1 field_10048; // offset 10048
        char _unknown_10049[3];
        int m_screenDPI;        // offset 10052
        undefined4 field_10056; // offset 10056
        char _unknown_10060[324];
        int field_10384; // offset 10384
        char _unknown_10388[4];
        undefined8 field_10392; // offset 10392
        double field_10400;     // offset 10400
        undefined8 field_10408; // offset 10408
        double field_10416;     // offset 10416
        int field_10424;        // offset 10424
        char _unknown_10428[4];
        undefined8 field_10432;            // offset 10432
        double field_10440;                // offset 10440
        RollingAverageCounter field_10448; // offset 10448
        RollingAverageCounter field_10504; // offset 10504
    };

    // 0x1000c41b0, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // ClientInputHandler::ClientInputHandler(): jumps straight to the base-object constructor

    // 0x1000c4ba0, 16 bytes, complete-object destructor, inline, placed by class name
    // ClientInputHandler::~ClientInputHandler(): jumps straight to the base-object destructor

    // 0x1000f1070, 32 bytes, inline, placed by class name
    // ClientInputHandler::KeyHeld(int) const
    undefined1 ClientInputHandler::KeyHeld(int param_1) {
        undefined1* puVar1;

        puVar1 = (undefined1*)std::array<bool, 108ul>::operator[]((array<bool, 108ul>*)&field_10060, (long)param_1);
        return *puVar1;
    }

    // 0x100105b50, 32 bytes, inline, placed by class name
    // ClientInputHandler::AllowDragGameScreen()
    bool ClientInputHandler::AllowDragGameScreen() {
        if (field_105 == '\0') {
            return false;
        }
        return field_10384 == 0;
    }

    // 0x100106540, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // ClientInputHandler::GetKeysDown() const
    /* game::ObjType::GetManAppearance() const */

    undefined1* game::ObjType::GetManAppearance() {
        return &field_888;
    }

    // 0x100106550, 16 bytes, inline, placed by class name
    // ClientInputHandler::GetKeysUp() const
    int* ClientInputHandler::GetKeysUp() {
        return &m_keysUp;
    }

    // 0x100127b10, 416 bytes, base-object constructor, inline, placed by class name
    // ClientInputHandler::ClientInputHandler()
    void ClientInputHandler::ClientInputHandler() {
        NpcUID* extraout_RDX;
        InputHandler* in_RSI;

        new (this) input::InputHandler(in_RSI);
        field_0 = &PTR_KeyPressed_100ef5d38;
        field_8 = 0;
        field_12 = 17;
        field_16 = 0;
        field_20 = 0;
        std::array<CoordType<UICoordSpecializer>, 4ul>::array();
        std::array<CoordType<UICoordSpecializer>, 4ul>::array();
        std::array<CoordType<UICoordSpecializer>, 4ul>::array();
        std::array<CoordType<UICoordSpecializer>, 4ul>::array();
        graphics::XPlotBlender<graphics::XPlot_NormalAlpha>::XPlotBlender<int>(
            (XPlotBlender<graphics::XPlot_NormalAlpha>*)&m_minimenuBuildCoords, -1);
        graphics::XPlotBlender<graphics::XPlot_NormalAlpha>::XPlotBlender<int>(
            (XPlotBlender<graphics::XPlot_NormalAlpha>*)&field_100, -1);
        field_104 = 1;
        field_105 = '\0';
        field_106 = 1;
        field_112 = 0;
        field_107 = false;
        field_108 = '\0';
        field_109 = 0;
        field_110 = 0;
        new (&m_keysDown) eastl::fixed_vector<int, 128ul, true, eastl::allocator>();
        new (&m_keysUp) eastl::fixed_vector<int, 128ul, true, eastl::allocator>();
        graphics::XPlotBlender<graphics::XPlot_NormalAlpha>::XPlotBlender<int>(
            (XPlotBlender<graphics::XPlot_NormalAlpha>*)&field_1992, -1);
        graphics::XPlotBlender<graphics::XPlot_NormalAlpha>::XPlotBlender<int>(
            (XPlotBlender<graphics::XPlot_NormalAlpha>*)&field_1996, -1);
        field_2000 = -1;
        field_2004 = -1;
        field_2024 = 0;
        std::array<CoordType<UICoordSpecializer>, 500ul>::array();
        std::array<CoordType<UICoordSpecializer>, 500ul>::array();
        field_10032 = 0;
        field_10036 = 0;
        graphics::XPlotBlender<graphics::XPlot_NormalAlpha>::XPlotBlender<int>(
            (XPlotBlender<graphics::XPlot_NormalAlpha>*)&field_10040, -1);
        graphics::XPlotBlender<graphics::XPlot_NormalAlpha>::XPlotBlender<int>(
            (XPlotBlender<graphics::XPlot_NormalAlpha>*)&field_10044, -1);
        field_10048 = 0;
        eastl::destruct<highlight::NpcUID*>((eastl*)&field_10056, (NpcUID*)4294967295, extraout_RDX);
        field_10384 = 0;
        new (field_10448, 5) datastructure::RollingAverageCounter();
        new (field_10504, 5) datastructure::RollingAverageCounter();
    }

    // 0x10012a7c0, 96 bytes, base-object destructor, inline, placed by class name
    // ClientInputHandler::~ClientInputHandler()
    void ClientInputHandler::~ClientInputHandler() {
        field_0 = &PTR_KeyPressed_100ef5d38;
        field_10504->~RollingAverageCounter();
        field_10448->~RollingAverageCounter();
        (&m_keysUp)->~fixed_vector();
        (&m_keysDown)->~fixed_vector();
    }

    // 0x10015f310, 32 bytes, inline, placed by class name
    // ClientInputHandler::KeyDown(int) const
    undefined1 ClientInputHandler::KeyDown(int param_1) {
        undefined1* puVar1;

        puVar1 = (undefined1*)std::array<bool, 108ul>::operator[]((array<bool, 108ul>*)&field_10168, (long)param_1);
        return *puVar1;
    }

    // 0x10015f330, 32 bytes, inline, placed by class name
    // ClientInputHandler::KeyUp(int) const
    undefined1 ClientInputHandler::KeyUp(int param_1) {
        undefined1* puVar1;

        puVar1 = (undefined1*)std::array<bool, 108ul>::operator[]((array<bool, 108ul>*)&field_10276, (long)param_1);
        return *puVar1;
    }

    // 0x10017ef50, 32 bytes, inline, placed by class name
    // ClientInputHandler::PrimaryOpOnPress()
    bool ClientInputHandler::PrimaryOpOnPress() {
        if (field_104 == 0) {
            return 0 < field_10384;
        }
        return true;
    }

} // namespace jag::oldscape
