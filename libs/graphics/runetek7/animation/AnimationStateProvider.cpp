// libs/graphics/runetek7/animation/AnimationStateProvider.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "AnimationStateProvider.h"

namespace jag::graphics {
    // 0x100f44cac, 4 bytes, __data
    AnimationStateProvider::m_useAsyncAnimUpdate = 1;

    // 0x100024170: the linker folded this into oldscape::option::IScriptOption::GetId() const, which has identical code
    uint AnimationStateProvider::GetLastFrameCount() const;

    // 0x10062ef00: the linker folded this into game::PositionEntity::LockCamera(), which has identical code
    AnimationStateProvider::InvalidateAsyncUpdate();

    // 0x10098b2e0, 64 bytes, placed by class name and debug map
    // AnimationStateProvider::WaitForAsyncTasks()
    void AnimationStateProvider::WaitForAsyncTasks() {
        if (m_useAsyncAnimUpdate != '\0') {
            if ((&field_16)->valid() != '\0') {
                std::future<void>::get();
            }
        }
    }

    // 0x10098cfc0, 144 bytes, placed by class name and debug map
    // AnimationStateProvider::BeginAsyncTasks(ThreadPool&, unsigned int, Array<LabelData, eastl::allocator> const&, math::Matrix44T<float> const&)
    void AnimationStateProvider::BeginAsyncTasks(ThreadPool* param_1, uint param_2, Array* param_3,
                                                 Matrix44T* param_4) {
        undefined1 local_50[8];
        AnimationStateProvider* local_48;
        Array* local_40;
        Matrix44T* local_38;

        if (m_useAsyncAnimUpdate != '\0') {
            if (GetPos() != param_2) {
                m_lastFrameCount = param_2;
                field_12 = 0;
                WaitForAsyncTasks(this);
                local_48 = this;
                local_40 = param_3;
                local_38 = param_4;
                ThreadPool::AddTask<AnimationStateProvider::BeginAsyncTasks(
                    ThreadPool&, unsigned int, Array<LabelData, eastl::allocator> const&,
                    math::Matrix44T<float> const&)::__8>((ThreadPool*)local_50, (char*)param_1, (__8*)&local_48);
                std::future<void>::operator=((future<void>*)&field_16, (future*)local_50);
                local_50->~future();
            }
        }
    }

    // 0x100c92b50: the linker folded this into InlineFatalBreak(), which has identical code
    AnimationStateProvider::~AnimationStateProvider();

    // 0x100c92b50: the linker folded this into InlineFatalBreak(), which has identical code
    AnimationStateProvider::~AnimationStateProvider();

} // namespace jag::graphics

// 0x10098d530, 16 bytes, placed by debug map only (low confidence)
// sin(float)
void sin(float param_1) {
    _sinf();
}

// 0x10098d540, 16 bytes, placed by debug map only (low confidence)
// cos(float)
void cos(float param_1) {
    _cosf();
}
