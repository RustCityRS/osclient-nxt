// libs/oldscape/clientlib/input/InputListener.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.clientlib

namespace jag::oldscape::input {
    class InputListener {
    public:
        InputListener();
        void SetDispatchHandler(InputHandler*);
        void GetCurrentTimeMS();
        static /* 16 bytes */ s_defaultHandler; // = { 15717992, 1, 0, 0 }

        // data members, from how the methods use this: 8 bytes
        undefined** field_0; // offset 0
    };

    // 0x100f37f40, 16 bytes, __data
    InputListener::s_defaultHandler = {15717992, 1, 0, 0};

    // 0x100392f80, 16 bytes, base-object constructor, placed by class name and debug map
    // InputListener::InputListener()
    void InputListener::InputListener() {
        field_0 = &s_defaultHandler;
    }

    // 0x100392f90, 16 bytes, complete-object constructor, placed by class name and debug map
    // InputListener::InputListener(): jumps straight to the base-object constructor

    // 0x100392fa0, 64 bytes, placed by class name and debug map
    // InputListener::SetDispatchHandler(InputHandler*)
    void InputListener::SetDispatchHandler(InputHandler* param_1) {
        if (param_1 == (InputHandler*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("handler != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/input/"
                      "InputListener.cpp",
                      19, (char*)0);
        }
        field_0 = &param_1->field_0;
    }

    // 0x100392fe0, 16 bytes, placed by class name and debug map
    // InputListener::GetCurrentTimeMS()
    void InputListener::GetCurrentTimeMS() {
        SystemTimer::GetTimeMS<std::chrono::steady_clock>((SystemTimer*)this);
    }

} // namespace jag::oldscape::input
