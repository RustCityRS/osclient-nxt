// libs/ui/utils/SwipeState.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::ui {
    class SwipeState {
    public:
        void SetSwipeTime(std::chrono::duration<long long, std::ratio<1l, 1000000000l>> arg1);
        void SetVerticallySwiped(bool arg1);
        void SetDeadZoneHorizontal(int arg1);
        enable_shared_from_this<PathingEntity>* GetComponent() const;
        void SetStartPosition(int arg1, int arg2);
        void SetComponent(const shared_ptr<Component>& component);
        void SetComponent(decltype(nullptr) arg1);
        void InitSwipe(const shared_ptr<Component>& component, const math::Vector2T<float>& vector2, int arg3,
                       int arg4);
        void SetLastPosition(int arg1, int arg2);
        void SetSwipeMovement(int arg1, int arg2);
        void SetHorizontallySwiped(bool arg1);
        void SetDeadZoneVertical(int arg1);
        void SetStopThreshold(float arg1);
        void SetDeceleration(float arg1);
        void ClearSwipeDeltaHistory();
        void SetIsDrifting(bool arg1);
        void SetDriftDelta(float arg1, float arg2);
        void Clear();
        void InitDrift();
        bool IsDriftingEnabled() const;
        void SetDriftSpeed(float arg1, float arg2);
        void ScaleDriftSpeed(float arg1);
        uint64_t UpdateSwipe(int arg1, int arg2,
                             std::chrono::duration<long long, std::ratio<1l, 1000000000l>> duration);
        void AddToSwipeDeltaHistory(std::chrono::duration<long long, std::ratio<1l, 1000000000l>> duration, int arg2,
                                    int arg3);
        uint64_t UpdateDrift(std::chrono::duration<long long, std::ratio<1l, 1000000000l>> duration);

    private:
        uint8_t _unknown_0[16];
        int m_startPosition;
        int field_20;
        int m_lastPosition;
        int field_28;
        int m_swipeMovement;
        int field_36;
        uint32_t field_40;
        uint32_t field_44;
        float* m_pSwipeTime;
        unsigned char m_verticallySwiped;
        bool m_horizontallySwiped;
        uint8_t _unknown_58[2];
        int m_deadZoneVertical;
        int m_deadZoneHorizontal;
        uint8_t _unknown_68[60];
        bool m_isDrifting;
        uint8_t _unknown_129[3];
        float m_driftSpeed;
        float field_136;
        float m_driftDelta;
        float field_144;
        float m_stopThreshold;
        float field_152;
        uint8_t _unknown_156[4];
    };

    // 0x1006796f0
    void SwipeState::SetLastPosition(int arg1, int arg2) {
        m_lastPosition = arg1;
        field_28 = arg2;
    }

    // 0x100679700
    void SwipeState::SetSwipeMovement(int arg1, int arg2) {
        m_fullScreenResolution = arg1;
        field_36 = arg2;
    }

    // 0x100679720
    void SwipeState::SetHorizontallySwiped(bool arg1) {
        m_horizontallySwiped = arg1;
    }

    // 0x100679730
    void SwipeState::SetDeadZoneVertical(int arg1) {
        m_deadZoneVertical = arg1;
    }

    // 0x100679740
    void SwipeState::SetStopThreshold(float arg1) {
        m_stopThreshold = arg1;
    }

    // 0x100679750
    void SwipeState::SetDeceleration(float arg1) {
        auto pfVar1 = std::min<float>(arg1, 1.0);
        pfVar1 = std::max<float>(*pfVar1, 0.0);
        field_152 = *pfVar1;
    }

    // 0x1006797a0
    void SwipeState::ClearSwipeDeltaHistory() {
        field_72.clear();
    }

    // 0x1006797b0
    void SwipeState::SetIsDrifting(bool arg1) {
        m_useAsyncOptimisedPath = arg1;
    }

    // 0x1006797c0
    void SwipeState::SetDriftDelta(float arg1, float arg2) {
        m_driftDelta = arg1;
        field_144 = arg2;
    }

    // 0x1006799d0
    bool SwipeState::IsDriftingEnabled() const {
        return field_152 <= 0.9999 && field_152 != 0.9999;
    }

    // 0x100679a00
    SwipeDelta* SwipeDelta::operator+=(const SwipeDelta& swipeDelta) {
        *this += swipeDelta;
        field_8 = field_8 + swipeDelta.field_8;
        field_12 = field_12 + swipeDelta.field_12;
        return this;
    }

    // 0x100679a70
    void SwipeState::SetDriftSpeed(float arg1, float arg2) {
        m_driftSpeed = arg1;
        field_136 = arg2;
    }

    // 0x100679aa0
    void SwipeState::ScaleDriftSpeed(float arg1) {
        m_driftSpeed *= arg1;
    }

    // 0x100679cf0
    void SwipeState::AddToSwipeDeltaHistory(std::chrono::duration<long long, std::ratio<1l, 1000000000l>> duration,
                                            int arg2, int arg3) {
        uint8_t local_28[16];

        new (local_28) SwipeDelta(duration, arg2, arg3);
        field_72.push_back(*local_28);
    }

} // namespace jag::ui

namespace jag::math {
    // 0x100679cd0
    Vector2T<int>* Vector2T<int>::operator+=(const Vector2T<int>& vector2) {
        *(int*)this = *(int*)this + *(int*)vector2;
        *(int*)(this + 4) = *(int*)(this + 4) + *(int*)(vector2 + 4);
        return this;
    }

} // namespace jag::math
