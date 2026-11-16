// projects/osclient/camera/tweens/CinemaCameraMovementTween.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.systemheap

namespace jag::oldscape {
    class CinemaCameraMovementTween {
    public:
        // virtual methods in vtable order
        virtual ~CinemaCameraMovementTween();
        CinemaCameraMovementTween(int arg1, CinemaCameraTween::Easing easing);

    private:
        int field_8;
        int field_12;
        uint64_t field_16;
        Easing field_24;
    };

    // 0x100009e70: CinemaCameraMovementTween::~CinemaCameraMovementTween() has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100124170
    CinemaCameraMovementTween::CinemaCameraMovementTween(int arg1, CinemaCameraTween::Easing easing)
        : CinemaCameraTween(arg1, easing) {}

} // namespace jag::oldscape
