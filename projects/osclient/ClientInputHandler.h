// projects/osclient/ClientInputHandler.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape {
    class ClientInputHandler {
    public:
        // virtual methods in vtable order
        virtual uint64_t KeyPressed(int arg1, unsigned long long arg2);
        virtual uint8_t KeyRepeat(int arg1, unsigned long long arg2);
        virtual uint8_t KeyReleased(int arg1, unsigned long long arg2);
        virtual uint8_t KeyTyped(char16_t arg1, unsigned long long arg2);
        virtual uint64_t PointerPress(int arg1, int arg2, int arg3, int arg4, unsigned long long arg5);
        virtual uint64_t PointerRelease(int arg1, int arg2, int arg3, int arg4, unsigned long long arg5);
        virtual uint64_t PointerDrag(int arg1, int arg2, int arg3, unsigned long long arg4);
        virtual uint64_t MouseMove(int arg1, int arg2, unsigned long long arg3);
        virtual uint64_t PointerCancel(int arg1, int arg2, unsigned long long arg3);
        virtual uint8_t WheelScroll(int arg1, unsigned long long arg2);
        virtual uint8_t KeyboardInputFocusChange(int arg1, unsigned long long arg2);
        virtual uint64_t TextCommandReceived(int arg1, unsigned long long arg2);
        virtual void ResetState();
        virtual uint8_t OnLowLevelMouseDown(int arg1, int arg2, int arg3, int arg4);
        ClientInputHandler();
        ~ClientInputHandler();
        uint8_t KeyHeld(int arg1) const;
        bool AllowDragGameScreen();
        uint8_t* GetKeysDown() const;
        uint8_t* GetKeysUp() const;
        uint8_t KeyDown(int arg1) const;
        uint8_t KeyUp(int arg1) const;
        void Init();
        void SetScreenDPI(int arg1);
        void CheckMoveToRest();
        uint32_t GetFlickVerticalVelocity();
        uint32_t GetFlickHorizontalVelocity();
        void UpdateDragDeadZonePixels();
        void ResetOnLogin();
        void ResetMouseWatchClick();
        void RequestMinimenuBuild();
        void SetMinimenuBuildCoords(CoordType<UICoordSpecializer> coordType1, CoordType<UICoordSpecializer> coordType2);
        void ServicePreDispatch();
        void SetCurrentAction(InputAction inputAction);
        void ResetDragAction();
        void ResetMinimenuBuildCoords();
        bool PrimaryOpOnPress();
        void AdvanceBuildingMinimenuState();
        void TrySwitchToDrag(unsigned long long arg1, bool arg2);
        void RecordMouseWatchClick(CoordType<UICoordSpecializer> coordType1, CoordType<UICoordSpecializer> coordType2,
                                   unsigned long long arg3, bool arg4);
        void GetPointerLastDistance(int arg1, int arg2);
        void GetPointerLastAngle(int arg1, int arg2);
        void RecordMouseWatchMove(CoordType<UICoordSpecializer> coordType1, CoordType<UICoordSpecializer> coordType2,
                                  unsigned long long arg3);
        unsigned long IsDragDeadZoneExceeded(CoordType<UICoordSpecializer> coordType1,
                                             CoordType<UICoordSpecializer> coordType2);
        bool IsMouseButtonPressed(int arg1);
        void ResetPointers();
        bool IsDragging() const;

    private:
        InputAction field_8;
        InputAction field_12;
        unsigned int field_16;
        unsigned int field_20;
        unsigned long long field_24;
        uint8_t _unknown_32[64];
        int m_minimenuBuildCoords;
        int field_100;
        uint8_t field_104;
        char field_105;
        uint8_t field_106;
        bool field_107;
        char field_108;
        uint8_t field_109;
        uint8_t field_110;
        uint8_t _unknown_111[1];
        unsigned long field_112;
        uint8_t _unknown_120[768];
        uint8_t m_keysDown[4];
        uint8_t _unknown_892[548];
        uint8_t m_pKeysUp[4];
        uint8_t _unknown_1444[548];
        int field_1992;
        int field_1996;
        int field_2000;
        int field_2004;
        bool field_2008;
        uint8_t _unknown_2009[7];
        unsigned long long field_2016;
        unsigned int field_2024;
        uint8_t _unknown_2028[8004];
        unsigned int field_10032;
        uint8_t field_10036;
        uint8_t _unknown_10037[3];
        unsigned int field_10040;
        unsigned int field_10044;
        uint8_t field_10048;
        uint8_t _unknown_10049[3];
        int m_screenDPI;
        unsigned int field_10056;
        uint8_t _unknown_10060[324];
        int field_10384;
        uint8_t _unknown_10388[4];
        uint64_t field_10392;
        double field_10400;
        uint64_t field_10408;
        double field_10416;
        unsigned int field_10424;
        uint8_t _unknown_10428[4];
        uint64_t field_10432;
        double field_10440;
        RollingAverageCounter field_10448;
        RollingAverageCounter field_10504;
    };

    // 0x1000f1070
    uint8_t ClientInputHandler::KeyHeld(int arg1) const {
        uint8_t* puVar1 = &field_10060[(long)arg1];
        return *puVar1;
    }

    // 0x100105b50
    bool ClientInputHandler::AllowDragGameScreen() {
        if (field_105 == '\0') {
            return false;
        }
        return field_10384 == 0;
    }

    // 0x100106540
    uint8_t* ClientInputHandler::GetKeysDown() const {
        return &field_888;
    }

    // 0x100106550
    uint8_t* ClientInputHandler::GetKeysUp() const {
        return m_pKeysUp;
    }

    // 0x100127b10
    ClientInputHandler::ClientInputHandler()
        : oldscape::input::InputHandler(), field_8(0), field_12(17), field_16(0), field_20(0) {
        m_minimenuBuildCoords.XPlotBlender<int>(4294967295);
        field_100.XPlotBlender<int>(4294967295);
        field_104 = 1;
        field_105 = '\0';
        field_106 = 1;
        field_112 = 0;
        field_107 = false;
        field_108 = '\0';
        field_109 = 0;
        field_110 = 0;
        new (m_keysDown) eastl::fixed_vector<int, 128ul>();
        new (m_pKeysUp) eastl::fixed_vector<int, 128ul>();
        field_1992.XPlotBlender<int>(4294967295);
        field_1996.XPlotBlender<int>(4294967295);
        field_2000 = -1;
        field_2004 = -1;
        field_2024 = 0;
        new (&field_2028) std::array<CoordType<UICoordSpecializer>, 500ul>();
        new (&field_4028) std::array<CoordType<UICoordSpecializer>, 500ul>();
        field_10032 = 0;
        field_10036 = 0;
        field_10040.XPlotBlender<int>(4294967295);
        field_10044.XPlotBlender<int>(4294967295);
        field_10048 = 0;
        (&field_10056)->destruct<highlight::NpcUID*>();
        field_10384 = 0;
        new (field_10448) datastructure::RollingAverageCounter(5);
        new (field_10504) datastructure::RollingAverageCounter(5);
    }

    // 0x10012a7c0
    ClientInputHandler::~ClientInputHandler() {
        field_10504->~RollingAverageCounter();
        field_10448->~RollingAverageCounter();
        m_pKeysUp->~fixed_vector();
        m_keysDown->~fixed_vector();
    }

    // 0x10015f310
    uint8_t ClientInputHandler::KeyDown(int arg1) const {
        uint8_t* puVar1 = &field_10168[(long)arg1];
        return *puVar1;
    }

    // 0x10015f330
    uint8_t ClientInputHandler::KeyUp(int arg1) const {
        uint8_t* puVar1 = &field_10276[(long)arg1];
        return *puVar1;
    }

    // 0x10017ef50
    bool ClientInputHandler::PrimaryOpOnPress() {
        if (field_104 == 0) {
            return 0 < field_10384;
        }
        return true;
    }

} // namespace jag::oldscape
