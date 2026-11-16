// libs/ui/utils/SwipeState.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::ui {
    class SwipeState {
    public:
        SetSwipeTime(std::chrono::duration<long long, std::ratio<1l, 1000000000l>>);
        SetVerticallySwiped(bool);
        SetDeadZoneHorizontal(int);
        GetComponent() const;
        void SetStartPosition(int, int);
        void SetComponent(shared_ptr<Component> const&);
        void SetComponent(decltype(nullptr));
        void InitSwipe(shared_ptr<Component> const&, math::Vector2T<float> const&, int, int);
        void SetLastPosition(int, int);
        SetSwipeMovement(int, int);
        void SetHorizontallySwiped(bool);
        void SetDeadZoneVertical(int);
        void SetStopThreshold(float);
        void SetDeceleration(float);
        void ClearSwipeDeltaHistory();
        SetIsDrifting(bool);
        void SetDriftDelta(float, float);
        void Clear();
        void InitDrift();
        bool IsDriftingEnabled() const;
        void SetDriftSpeed(float, float);
        void ScaleDriftSpeed(float);
        UpdateSwipe(int, int, std::chrono::duration<long long, std::ratio<1l, 1000000000l>>);
        void AddToSwipeDeltaHistory(std::chrono::duration<long long, std::ratio<1l, 1000000000l>>, int, int);
        UpdateDrift(std::chrono::duration<long long, std::ratio<1l, 1000000000l>>);

        // data members, from how the methods use this: 160 bytes
        char _unknown_0[16];
        int m_startPosition;       // offset 16
        int field_20;              // offset 20
        int m_lastPosition;        // offset 24
        int field_28;              // offset 28
        uint m_swipeMovement;      // offset 32
        uint field_36;             // offset 36
        undefined4 field_40;       // offset 40
        undefined4 field_44;       // offset 44
        Language* m_pSwipeTime;    // offset 48
        bool m_verticallySwiped;   // offset 56
        bool m_horizontallySwiped; // offset 57
        char _unknown_58[2];
        int m_deadZoneVertical;    // offset 60
        uint m_deadZoneHorizontal; // offset 64
        char _unknown_68[60];
        bool m_isDrifting; // offset 128
        char _unknown_129[3];
        float m_driftSpeed;    // offset 132
        float field_136;       // offset 136
        float m_driftDelta;    // offset 140
        float field_144;       // offset 144
        float m_stopThreshold; // offset 148
        float field_152;       // offset 152
        char _unknown_156[4];
    };

    // 0x1006796f0, 16 bytes, inline, placed by class name and debug map
    // SwipeState::SetLastPosition(int, int)
    void SwipeState::SetLastPosition(int param_1, int param_2) {
        m_lastPosition = param_1;
        field_28 = param_2;
    }

    // 0x100679700, 16 bytes, inline, placed by class name and debug map
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // SwipeState::SetSwipeMovement(int, int)
    /* OpenGLView::SetFullScreenResolution(unsigned int, unsigned int) */

    void OpenGLView::SetFullScreenResolution(uint param_1, uint param_2) {
        m_fullScreenResolution = param_1;
        field_36 = param_2;
    }

    // 0x100679720, 16 bytes, inline, placed by class name and debug map
    // SwipeState::SetHorizontallySwiped(bool)
    void SwipeState::SetHorizontallySwiped(bool param_1) {
        m_horizontallySwiped = param_1;
    }

    // 0x100679730, 16 bytes, inline, placed by class name and debug map
    // SwipeState::SetDeadZoneVertical(int)
    void SwipeState::SetDeadZoneVertical(int param_1) {
        m_deadZoneVertical = param_1;
    }

    // 0x100679740, 16 bytes, inline, placed by class name and debug map
    // SwipeState::SetStopThreshold(float)
    void SwipeState::SetStopThreshold(float param_1) {
        m_stopThreshold = param_1;
    }

    // 0x100679750, 80 bytes, inline, placed by class name and debug map
    // SwipeState::SetDeceleration(float)
    void SwipeState::SetDeceleration(float param_1) {
        float* pfVar1;
        float local_1c;
        float local_18;
        float local_14;

        local_18 = 1.0;
        local_1c = param_1;
        pfVar1 = std::min<float>(&local_1c, &local_18);
        local_14 = 0.0;
        pfVar1 = std::max<float>(pfVar1, &local_14);
        field_152 = *pfVar1;
    }

    // 0x1006797a0, 16 bytes, inline, placed by class name and debug map
    // SwipeState::ClearSwipeDeltaHistory()
    void SwipeState::ClearSwipeDeltaHistory() {
        (&field_72)->clear();
    }

    // 0x1006797b0, 16 bytes, inline, placed by class name and debug map
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // SwipeState::SetIsDrifting(bool)
    /* graphics::RT7AnimationSampler::SetUseAsyncOptimisedPath(bool) */

    void graphics::RT7AnimationSampler::SetUseAsyncOptimisedPath(bool param_1) {
        m_useAsyncOptimisedPath = param_1;
    }

    // 0x1006797c0, 32 bytes, inline, placed by class name and debug map
    // SwipeState::SetDriftDelta(float, float)
    void SwipeState::SetDriftDelta(float param_1, float param_2) {
        m_driftDelta = param_1;
        field_144 = param_2;
    }

    // 0x1006799d0, 32 bytes, inline, placed by class name and debug map
    // SwipeState::IsDriftingEnabled() const
    bool SwipeState::IsDriftingEnabled() {
        return field_152 <= 0.9999 && field_152 != 0.9999;
    }

    // 0x1006799f0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // SwipeDelta::SwipeDelta(): jumps straight to the base-object constructor

    // 0x100679a00, 48 bytes, inline, placed by debug map only (low confidence)
    // SwipeDelta::operator+=(SwipeDelta const&)
    /* SwipeDelta::TEMPNAMEPLACEHOLDERVALUE(SwipeDelta const&) */

    SwipeDelta* SwipeDelta::operator+=(SwipeDelta* param_1) {
        std::chrono::duration<long long, std::ratio<1l, 1000000000l>>::operator+=(
            (duration<long long, std::ratio<1l, 1000000000l>>*)this, (duration*)param_1);
        field_8 = field_8 + param_1->field_8;
        field_12 = field_12 + param_1->field_12;
        return this;
    }

    // 0x100679a70, 32 bytes, inline, placed by class name and debug map
    // SwipeState::SetDriftSpeed(float, float)
    void SwipeState::SetDriftSpeed(float param_1, float param_2) {
        m_driftSpeed = param_1;
        field_136 = param_2;
    }

    // 0x100679aa0, 32 bytes, inline, placed by class name and debug map
    // SwipeState::ScaleDriftSpeed(float)
    void SwipeState::ScaleDriftSpeed(float param_1) {
        math::Vector2T<float>::operator*=((Vector2T<float>*)&m_driftSpeed, param_1);
    }

    // 0x100679cf0, 64 bytes, inline, placed by class name and debug map
    // SwipeState::AddToSwipeDeltaHistory(std::chrono::duration<long long, std::ratio<1l, 1000000000l> >, int, int)
    /* SwipeState::AddToSwipeDeltaHistory(std::chrono::duration<long long, std::ratio<1l,
   1000000000l> >, int, int) */

    void SwipeState::AddToSwipeDeltaHistory(long param_1) {
        undefined1 local_28[16];

        new (local_28) SwipeDelta();
        ((param_1 + 72))->push_back(local_28);
    }

} // namespace jag::ui

namespace jag::math {
    // 0x100679cd0, 32 bytes, inline, placed by debug map only (low confidence)
    // Vector2T<int>::operator+=(Vector2T<int> const&)
    /* Vector2T<int>::TEMPNAMEPLACEHOLDERVALUE(Vector2T<int> const&) */

    Vector2T<int>* Vector2T<int>::operator+=(Vector2T* param_1) {
        *(int*)this = *(int*)this + *(int*)param_1;
        *(int*)(this + 4) = *(int*)(this + 4) + *(int*)(param_1 + 4);
        return this;
    }

} // namespace jag::math
