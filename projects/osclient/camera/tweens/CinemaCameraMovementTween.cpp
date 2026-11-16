// projects/osclient/camera/tweens/CinemaCameraMovementTween.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.systemheap

namespace jag::oldscape {
    class CinemaCameraMovementTween {
    public:
        // virtual methods in vtable order
        virtual ~CinemaCameraMovementTween();
        CinemaCameraMovementTween(int, CinemaCameraTween::Easing);

        // data members, from how the methods use this: 8 bytes
        undefined* field_0; // offset 0, vtable pointer
    };

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    CinemaCameraMovementTween::~CinemaCameraMovementTween();

    // 0x100124170, 48 bytes, base-object constructor, placed by class name and debug map
    // CinemaCameraMovementTween::CinemaCameraMovementTween(int, CinemaCameraTween::Easing)
    void CinemaCameraMovementTween::CinemaCameraMovementTween() {
        CinemaCameraTween::CinemaCameraTween();
        field_0 = PTR_vtable_100ee8908 + 16;
    }

    // 0x100c92b50: the linker folded this into InlineFatalBreak(), which has identical code
    CinemaCameraMovementTween::~CinemaCameraMovementTween();

    // 0x100c92b50: the linker folded this into InlineFatalBreak(), which has identical code
    CinemaCameraMovementTween::~CinemaCameraMovementTween();

} // namespace jag::oldscape
