// libs/ui/utils/SwipeState.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.ui

#include "SwipeState.h"

namespace jag::ui {
    // 0x100013930: SwipeState::SetSwipeTime(std::chrono::duration<long long, std::ratio<1l, 1000000000l>>) has the same machine code as oldscape::ClientObj::SetHighlight(oldscape::HighlightChannelProperties const*)

    // 0x1001174c0: SwipeState::SetVerticallySwiped(bool) has the same machine code as oldscape::ClientObj::SetEnabledOpsBitMask(unsigned char)

    // 0x1001cdf70: SwipeState::SetDeadZoneHorizontal(int) has the same machine code as game::StaticPointLight::SetRGB(unsigned int)

    // 0x1003efcd0: SwipeState::GetComponent() const has the same machine code as enable_shared_from_this<ObjStackEntity>::shared_from_this()

    // 0x1004987a0: SwipeState::SetStartPosition(int, int) has the same machine code as game::StaticPointLight::SetSourceMapSquare(int, int)

    // 0x100677290: SwipeState::SetComponent(shared_ptr<Component> const&) has the same machine code as PinchState::SetComponent(shared_ptr<Component> const&)

    // 0x100677360: SwipeState::SetComponent(decltype(nullptr)) has the same machine code as PinchState::SetComponent(decltype(nullptr))

    // 0x100679510
    void SwipeState::InitSwipe(const shared_ptr<Component>& component, const math::Vector2T<float>& vector2, int arg3,
                               int arg4) {
        double dVar1;
        uint8_t bVar3;
        unsigned char arg2;
        Component* this_00;
        LocData* this_01;
        unsigned char* arg1;
        uint8_t* pbVar4;
        type* arg2_00;
        uint32_t extraout_XMM0_Da;
        uint32_t extraout_XMM0_Db;
        float* local_58;
        unsigned int local_48;
        unsigned int local_44;
        float local_40;
        float local_38;
        unsigned char local_33[3];

        if (!component == nullptr) {
            this_00 = (Component*)component.operator->();
            this_01 = (LocData*)this_00->GetSwipeConfig();
            bVar3 = this_01->GetShape();
            local_48 = (unsigned int)bVar3;
            bVar3 = this_01->GetRot();
            local_44 = (unsigned int)bVar3;
            local_33[0] = this_01->GetDeceleration();
            local_33[1] = 0;
            arg1 = std::max<unsigned char>(*local_33, *(local_33 + 1));
            local_33[2] = 100;
            pbVar4 = std::min<unsigned char>(*arg1, *(local_33 + 2));
            local_40 = (float)*pbVar4 * 0.01;
            arg2 = this_01->GetStopExponent();
            dVar1 = (double)pow<double, unsigned char>(
                (double)(((uint64_t)extraout_XMM0_Db << 32) | (uint32_t)extraout_XMM0_Da), arg2);
            local_38 = 1.0 / (float)dVar1;
            SetComponent(component);
            SetStartPosition(arg3, arg4);
            SetLastPosition((int)*(float*)vector2, (int)*(float*)(vector2 + 4));
            SetFullScreenResolution(0, 0);
            local_58.duration<int>(0, arg2_00);
            SetLanguage(local_58);
            SetHorizontallySwiped(false);
            SetReadyAnim('\0');
            SetDeadZoneVertical(local_48);
            SetStatus(local_44);
            SetStopThreshold(local_38);
            SetDeceleration(local_40);
            ClearSwipeDeltaHistory();
            SetUseAsyncOptimisedPath(false);
            SetDriftDelta(0.0, 0.0);
        }
    }

    // 0x1006797e0
    void SwipeState::Clear() {
        type* arg2;
        float* local_20;

        SetComponent(nullptr);
        SetStartPosition(0, 0);
        SetLastPosition(0, 0);
        SetFullScreenResolution(0, 0);
        local_20.duration<int>(0, arg2);
        SetLanguage(local_20);
        SetHorizontallySwiped(false);
        SetReadyAnim('\0');
        SetDeadZoneVertical(0);
        SetStatus(0);
        SetStopThreshold(0.0);
        SetDeceleration(1.0);
        ClearSwipeDeltaHistory();
        SetUseAsyncOptimisedPath(false);
        SetDriftDelta(0.0, 0.0);
    }

    // 0x1006798b0
    void SwipeState::InitDrift() {
        bool bVar2;
        uint64_t* puVar3;
        long lVar4;
        float arg1;
        ReturnValue local_78;
        ReturnValue local_68;
        SwipeDelta local_58;
        duration<long long, std::ratio<1l, 1000000000l>> local_40;
        int local_38;
        int local_34;

        if (IsDriftingEnabled() != '\0') {
            local_40 = SwipeDelta();
            local_78 = field_72.end();
            local_68 = field_72.end();
            bVar2 = local_78 != local_68;
            if (bVar2) {
                do {
                    puVar3 = (uint64_t*)local_78.end();
                    local_58.field_0 = (duration<long long, std::ratio<1l, _1000000000l> _>*)*puVar3;
                    local_58._8_8_ = puVar3[1];
                    local_40 += local_58;
                    ++local_78;
                    bVar2 = local_78 != local_68;
                } while (bVar2);
            }
            SetDriftSpeed((float)local_38, (float)local_34);
            lVar4 = local_40.count();
            if (lVar4 < 1) {
                arg1 = 1.0;
            } else {
                arg1 = 1.0 / (float)lVar4;
            }
            ScaleDriftSpeed(arg1);
            SetUseAsyncOptimisedPath(true);
        }
        field_72.clear();
    }

    // 0x100679ac0
    uint64_t SwipeState::UpdateSwipe(int arg1, int arg2,
                                     std::chrono::duration<long long, std::ratio<1l, 1000000000l>> duration) {
        unsigned int uVar2;
        Component* this_00;
        enable_shared_from_this<PathingEntity> local_60;
        int local_48;
        int iStack_44;
        uint64_t local_40;
        int local_38;
        int local_34;

        new (&local_48) math::Vector2T();
        local_60.shared_from_this();
        if (!local_60 == nullptr) {
            new (&local_38) oldscape::sidebars::SideBarData(arg1 - m_lastPosition, arg2 - field_28);
            SetLastPosition(arg1, arg2);
            this_00 = (Component*)local_60.operator->();
            uVar2 = ((ComponentSwipeConfig*)this_00->GetSwipeConfig())->GetDirectionMask();
            if (((0 < local_38) && ((uVar2 & 1) == 0)) || ((local_38 < 0 && ((uVar2 & 2) == 0)))) {
                m_swipeMovement = 0;
                field_40 = 0;
                m_horizontallySwiped = false;
                local_38 = 0;
            }
            if (((0 < local_34) && ((uVar2 & 4) == 0)) || ((local_34 < 0 && ((uVar2 & 8) == 0)))) {
                field_36 = 0;
                field_44 = 0;
                m_verticallySwiped = '\0';
                local_34 = 0;
            }
            m_swipeMovement += local_38;
            if (m_verticallySwiped == '\0') {
                if (((field_36 < -m_deadZoneVertical) && ((uVar2 & 8) != 0)) ||
                    ((m_deadZoneVertical < field_36 && ((uVar2 & 4) != 0)))) {
                    m_deadZoneVertical = 0;
                    m_verticallySwiped = '\x01';
                }
            }
            if (m_horizontallySwiped == false) {
                if (((m_deadZoneHorizontal < m_swipeMovement) && ((uVar2 & 1) != 0)) ||
                    ((m_swipeMovement < -m_deadZoneHorizontal && ((uVar2 & 2) != 0)))) {
                    m_deadZoneHorizontal = 0;
                    m_horizontallySwiped = true;
                }
            }
            local_40._0_4_ = field_40;
            local_40._4_4_ = field_44;
            if (m_verticallySwiped != '\0') {
                local_40 = (((uint64_t)(local_40._4_4_ + local_34) << 32) | (uint32_t)((int)local_40));
            }
            if (m_horizontallySwiped != false) {
                local_40 = (((uint64_t)local_40._4_4_ << 32) | (uint32_t)((int)local_40 + local_38));
            }
            local_48 = local_40 - field_40;
            AddToSwipeDeltaHistory(duration, local_48, iStack_44);
            field_40 = local_40;
        }
        return (((uint64_t)iStack_44 << 32) | (uint32_t)local_48);
    }

    // 0x100679d30
    uint64_t SwipeState::UpdateDrift(std::chrono::duration<long long, std::ratio<1l, 1000000000l>> duration) {
        long lVar1;
        uint8_t local_48[16];
        uint8_t local_38[16];
        int local_18;
        int iStack_14;

        new (&local_18) math::Vector2T();
        m_driftSpeed *= (1.0 - field_152);
        local_48 = (unsigned __int128)((unsigned int)m_driftSpeed);
        float local_1c = (float)::abs(m_driftSpeed);
        local_38 = (unsigned __int128)((unsigned int)field_136);
        float fVar2 = (float)::abs(field_136);
        if ((m_stopThreshold <= local_1c) || (m_stopThreshold <= fVar2)) {
            lVar1 = (duration).count();
            local_48._0_4_ = (float)local_48._0_4_ * (float)lVar1 + m_driftDelta;
            m_driftDelta = (float)local_48._0_4_;
            local_38._0_4_ = (float)local_38._0_4_ * (float)lVar1 + field_144;
            field_144 = (float)local_38._0_4_;
            fVar2 = (float)::abs((float)local_48._0_4_);
            if (1.0 < fVar2) {
                local_18 = (int)(float)local_48._0_4_;
                m_driftDelta = (float)local_48._0_4_ - (float)(int)(float)local_48._0_4_;
            }
            fVar2 = (float)::abs((float)local_38._0_4_);
            if (1.0 < fVar2) {
                iStack_14 = (int)(float)local_38._0_4_;
                field_144 = (float)local_38._0_4_ - (float)(int)(float)local_38._0_4_;
            }
        } else {
            Clear();
        }
        return (((uint64_t)iStack_14 << 32) | (uint32_t)local_18);
    }

} // namespace jag::ui
