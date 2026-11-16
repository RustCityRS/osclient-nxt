// libs/hal/input/InputGestures.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: osclient

namespace jag::input::gesture {
    // 0x100199380, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // GestureManager::GestureManager(): jumps straight to the base-object constructor

    // 0x100199390, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // GestureManager::~GestureManager(): jumps straight to the base-object destructor

    // 0x100199960, 128 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // GestureManager::GestureManager()
    void GestureManager::GestureManager() {
        allocator local_28[8];

        m_numTouches = 0;
        eastl::allocator::allocator(local_28, "EASTL vector");
        new (&field_8, 256, local_28) eastl::vector<TouchPoint, eastl::allocator>();
        eastl::allocator::allocator(local_28, "EASTL set");
        eastl::map<eastl::string, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                   eastl::less<eastl::string>, eastl::allocator>::map((allocator*)&field_40);
    }

    // 0x100199b60, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // TouchPoint::TouchPoint(): jumps straight to the base-object constructor

    // 0x100199b70, 32 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // TouchPoint::TouchPoint()
    /* TouchPoint::Reset() */

    void TouchPoint::Reset() {
        field_0 = 4294967295;
        field_8 = 0.0;
        field_12 = 0.0;
        field_16 = 0;
    }

    // 0x100199b70: the linker folded this into TouchPoint::TouchPoint(), which has identical code
    TouchPoint::Reset();

    // 0x100199bd0, 48 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // GestureManager::~GestureManager()
    void GestureManager::~GestureManager() {
        (&field_40)->~map();
        (&field_8)->~vector();
    }

} // namespace jag::input::gesture
