// libs/graphics/runetek7/animation/AnimationStateProvider.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "AnimationStateProvider.h"

namespace jag::graphics {
    // 0x100f44cac
    int32_t AnimationStateProvider::m_useAsyncAnimUpdate = 1;

    // 0x100024170: AnimationStateProvider::GetLastFrameCount() const has the same machine code as oldscape::option::IScriptOption::GetId() const

    // 0x10062ef00: AnimationStateProvider::InvalidateAsyncUpdate() has the same machine code as game::PositionEntity::LockCamera()

    // 0x10098b2e0
    void AnimationStateProvider::WaitForAsyncTasks() {
        if (m_useAsyncAnimUpdate != '\0') {
            if (field_16.valid() != '\0') {
                std::future<void>::get();
            }
        }
    }

    // 0x10098cfc0
    void AnimationStateProvider::BeginAsyncTasks(ThreadPool& threadPool, unsigned int arg2,
                                                 const Array<LabelData>& labelDatas,
                                                 const math::Matrix44T<float>& matrix44) {
        ReturnValue local_50;
        AnimationStateProvider* local_48;
        Array<LabelData>* local_40;
        Matrix44T<float>* local_38;

        if (m_useAsyncAnimUpdate != '\0') {
            if (GetPos() != arg2) {
                m_lastFrameCount = arg2;
                field_12 = 0;
                WaitForAsyncTasks();
                local_48 = this;
                local_40 = labelDatas;
                local_38 = matrix44;
                ThreadPool::AddTask<AnimationStateProvider::BeginAsyncTasks(
                    ThreadPool&, unsigned int, Array<LabelData> const&, math::Matrix44T<float> const&)::__8>(
                    &local_50, (char*)threadPool, (__8*)&local_48);
                field_16 = local_50;
            }
        }
    }

    // 0x100c92b50: AnimationStateProvider::~AnimationStateProvider() has the same machine code as InlineFatalBreak()

} // namespace jag::graphics

// 0x10098d530
void sin(float arg1) {
    _sinf();
}

// 0x10098d540
void cos(float arg1) {
    _cosf();
}
