// libs/oldscape/clientlib/input/InputListener.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.clientlib

namespace jag::oldscape::input {
    class InputListener {
    public:
        InputListener();
        void SetDispatchHandler(InputHandler* inputHandler);
        void GetCurrentTimeMS();
        static int32_t s_defaultHandler[4]; // = { 15717992, 1, 0, 0 }

    private:
        uint8_t** field_0;
    };

    // 0x100f37f40
    int32_t InputListener::s_defaultHandler[4] = {15717992, 1, 0, 0};

    // 0x100392f80
    InputListener::InputListener() {
        field_0 = &s_defaultHandler;
    }

    // 0x100392fa0
    void InputListener::SetDispatchHandler(InputHandler* inputHandler) {
        if (inputHandler == nullptr) {
            LogAssert("handler != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/input/"
                      "InputListener.cpp",
                      19, nullptr);
        }
        field_0 = &inputHandler->field_0;
    }

    // 0x100392fe0
    void InputListener::GetCurrentTimeMS() {
        SystemTimer::GetTimeMS<std::chrono::steady_clock>();
    }

} // namespace jag::oldscape::input
