// libs/hal/thread/lock_guard.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    template <
        typename...> // 4 instantiations, e.g. <render::ImmediateRenderContext>, <render::RenderContext>, <std::mutex>
    class lock_guard {
    public:
        lock_guard(std::mutex& mutex);
        ~lock_guard();
        lock_guard(render::ImmediateRenderContext& immediateRenderContext);
        lock_guard(render::RenderContext& renderContext);
        lock_guard(std::recursive_mutex& recursive_mutex);
    };

    // 0x1003a8d10
    lock_guard<std::mutex>::lock_guard(std::mutex& mutex) {
        *(mutex**)this = mutex;
        std::mutex::lock();
    }

    // 0x1003a8d30
    lock_guard<std::mutex>::~lock_guard() {
        std::mutex::unlock();
    }

    // 0x100c3cbf0
    lock_guard<render::ImmediateRenderContext>::lock_guard(render::ImmediateRenderContext& immediateRenderContext) {
        *(ImmediateRenderContext**)this = immediateRenderContext;
        immediateRenderContext.lock();
    }

    // 0x100c3cc20
    lock_guard<render::ImmediateRenderContext>::~lock_guard() {
        (*(ImmediateRenderContext**)this)->unlock();
    }

    // 0x100c3f680
    lock_guard<render::RenderContext>::lock_guard(render::RenderContext& renderContext) {
        *(RenderContext**)this = renderContext;
        renderContext.lock();
    }

    // 0x100c3f6b0
    lock_guard<render::RenderContext>::~lock_guard() {
        (*(RenderContext**)this)->unlock();
    }

    // 0x100c5d560
    lock_guard<std::recursive_mutex>::lock_guard(std::recursive_mutex& recursive_mutex) {
        *(recursive_mutex**)this = recursive_mutex;
        std::recursive_mutex::lock();
    }

    // 0x100c5d580
    lock_guard<std::recursive_mutex>::~lock_guard() {
        std::recursive_mutex::unlock();
    }

} // namespace jag
