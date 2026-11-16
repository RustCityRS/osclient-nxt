// libs/hal/thread/lock_guard.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    template <
        typename...> // 4 instantiations, e.g. <render::ImmediateRenderContext>, <render::RenderContext>, <std::mutex>
    class lock_guard {
    public:
        lock_guard(std::mutex&);
        ~lock_guard();
        lock_guard(render::ImmediateRenderContext&);
        lock_guard(render::RenderContext&);
        lock_guard(std::recursive_mutex&);
    };

    // 0x1003a2a50, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // lock_guard<std::mutex>::lock_guard(std::mutex&): jumps straight to the base-object constructor

    // 0x1003a2a70, 16 bytes, complete-object destructor, inline, placed by class name
    // lock_guard<std::mutex>::~lock_guard(): jumps straight to the base-object destructor

    // 0x1003a8d10, 32 bytes, base-object constructor, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // lock_guard<std::mutex>::lock_guard(std::mutex&)
    /* std::scoped_lock<std::mutex>::scoped_lock(std::mutex&) */

    void std::scoped_lock<std::mutex>::scoped_lock(mutex* param_1) {
        *(mutex**)this = param_1;
        std::mutex::lock();
    }

    // 0x1003a8d30, 16 bytes, base-object destructor, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // lock_guard<std::mutex>::~lock_guard()
    /* std::scoped_lock<std::mutex>::~scoped_lock() */

    void std::scoped_lock<std::mutex>::~scoped_lock() {
        std::mutex::unlock();
    }

    // 0x100c15950, 16 bytes, complete-object constructor, inline, placed by class name
    // lock_guard<render::ImmediateRenderContext>::lock_guard(render::ImmediateRenderContext&): jumps straight to the base-object constructor

    // 0x100c161d0, 16 bytes, complete-object destructor, inline, placed by class name
    // lock_guard<render::ImmediateRenderContext>::~lock_guard(): jumps straight to the base-object destructor

    // 0x100c1a980, 16 bytes, complete-object constructor, inline, placed by class name
    // lock_guard<render::RenderContext>::lock_guard(render::RenderContext&): jumps straight to the base-object constructor

    // 0x100c1a990, 16 bytes, complete-object destructor, inline, placed by class name
    // lock_guard<render::RenderContext>::~lock_guard(): jumps straight to the base-object destructor

    // 0x100c2cfa0, 16 bytes, complete-object constructor, inline, placed by class name
    // lock_guard<std::recursive_mutex>::lock_guard(std::recursive_mutex&): jumps straight to the base-object constructor

    // 0x100c2d050, 16 bytes, complete-object destructor, inline, placed by class name
    // lock_guard<std::recursive_mutex>::~lock_guard(): jumps straight to the base-object destructor

    // 0x100c3cbf0, 32 bytes, base-object constructor, inline, placed by class name
    // lock_guard<render::ImmediateRenderContext>::lock_guard(render::ImmediateRenderContext&)
    void lock_guard<render::ImmediateRenderContext>::lock_guard(ImmediateRenderContext* param_1) {
        *(ImmediateRenderContext**)this = param_1;
        param_1->lock();
    }

    // 0x100c3cc20, 16 bytes, base-object destructor, inline, placed by class name
    // lock_guard<render::ImmediateRenderContext>::~lock_guard()
    void lock_guard<render::ImmediateRenderContext>::~lock_guard() {
        (*(ImmediateRenderContext**)this)->unlock();
    }

    // 0x100c3f680, 32 bytes, base-object constructor, inline, placed by class name
    // lock_guard<render::RenderContext>::lock_guard(render::RenderContext&)
    void lock_guard<render::RenderContext>::lock_guard(RenderContext* param_1) {
        *(RenderContext**)this = param_1;
        param_1->lock();
    }

    // 0x100c3f6b0, 16 bytes, base-object destructor, inline, placed by class name
    // lock_guard<render::RenderContext>::~lock_guard()
    void lock_guard<render::RenderContext>::~lock_guard() {
        (*(RenderContext**)this)->unlock();
    }

    // 0x100c5d560, 32 bytes, base-object constructor, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // lock_guard<std::recursive_mutex>::lock_guard(std::recursive_mutex&)
    /* std::scoped_lock<std::recursive_mutex>::scoped_lock(std::recursive_mutex&) */

    void std::scoped_lock<std::recursive_mutex>::scoped_lock(recursive_mutex* param_1) {
        *(recursive_mutex**)this = param_1;
        std::recursive_mutex::lock();
    }

    // 0x100c5d580, 16 bytes, base-object destructor, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // lock_guard<std::recursive_mutex>::~lock_guard()
    /* std::scoped_lock<std::recursive_mutex>::~scoped_lock() */

    void std::scoped_lock<std::recursive_mutex>::~scoped_lock() {
        std::recursive_mutex::unlock();
    }

} // namespace jag
