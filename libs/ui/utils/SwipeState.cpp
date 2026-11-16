// libs/ui/utils/SwipeState.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.ui

#include "SwipeState.h"

namespace jag::ui {
    // 0x100013930: the linker folded this into oldscape::ClientObj::SetHighlight(oldscape::HighlightChannelProperties const*), which has identical code
    SwipeState::SetSwipeTime(std::chrono::duration<long long, std::ratio<1l, 1000000000l>>);

    // 0x1001174c0: the linker folded this into oldscape::ClientObj::SetEnabledOpsBitMask(unsigned char), which has identical code
    SwipeState::SetVerticallySwiped(bool);

    // 0x1001cdf70: the linker folded this into game::StaticPointLight::SetRGB(unsigned int), which has identical code
    SwipeState::SetDeadZoneHorizontal(int);

    // 0x1003efcd0: the linker folded this into enable_shared_from_this<ObjStackEntity>::shared_from_this(), which has identical code
    SwipeState::GetComponent() const;

    // 0x1004987a0: the linker folded this into game::StaticPointLight::SetSourceMapSquare(int, int), which has identical code
    SwipeState::SetStartPosition(int, int);

    // 0x100677290: the linker folded this into PinchState::SetComponent(shared_ptr<Component> const&), which has identical code
    SwipeState::SetComponent(shared_ptr<Component> const&);

    // 0x100677360: the linker folded this into PinchState::SetComponent(decltype(nullptr)), which has identical code
    SwipeState::SetComponent(decltype(nullptr));

    // 0x100679510, 416 bytes, placed by class name and debug map
    // SwipeState::InitSwipe(shared_ptr<Component> const&, math::Vector2T<float> const&, int, int)
    void SwipeState::InitSwipe(shared_ptr* param_1, Vector2T* param_2, int param_3, int param_4) {
        double dVar1;
        byte bVar3;
        uchar uVar4;
        Component* this_00;
        LocData* this_01;
        uchar* puVar5;
        byte* pbVar6;
        undefined4 extraout_XMM0_Da;
        undefined4 extraout_XMM0_Db;
        Language* local_58;
        undefined4 local_4c;
        uint local_48;
        uint local_44;
        float local_40;
        float local_38;
        uchar local_33[3];

        if (!operator==(param_1, (_func_decltype_nullptr*)0)) {
            this_00 = (Component*)shared_ptr<Component>::operator->((shared_ptr<Component>*)param_1);
            this_01 = (LocData*)this_00->GetSwipeConfig();
            bVar3 = this_01->GetShape();
            local_48 = (uint)bVar3;
            bVar3 = this_01->GetRot();
            local_44 = (uint)bVar3;
            local_33[0] = this_01->GetDeceleration();
            local_33[1] = 0;
            puVar5 = std::max<unsigned char>(local_33, local_33 + 1);
            local_33[2] = 100;
            pbVar6 = std::min<unsigned char>(puVar5, local_33 + 2);
            local_40 = (float)*pbVar6 * 0.01;
            uVar4 = this_01->GetStopExponent();
            dVar1 = (double)pow<double, unsigned char>((double)CONCAT44(extraout_XMM0_Db, extraout_XMM0_Da), uVar4);
            local_38 = 1.0 / (float)dVar1;
            SetComponent(this, param_1);
            SetStartPosition(this, param_3, param_4);
            SetLastPosition(this, (int)*(float*)param_2, (int)*(float*)(param_2 + 4));
            SetFullScreenResolution(0, 0);
            local_4c = 0;
            std::chrono::duration<long long, std::ratio<1l, 1000000000l>>::duration<int>((int*)&local_58,
                                                                                         (type*)&local_4c);
            SetLanguage(local_58);
            SetHorizontallySwiped(this, false);
            SetReadyAnim(false);
            SetDeadZoneVertical(this, local_48);
            SetStatus();
            SetStopThreshold(this, local_38);
            SetDeceleration(this, local_40);
            ClearSwipeDeltaHistory(this);
            SetUseAsyncOptimisedPath(false);
            SetDriftDelta(this, 0.0, 0.0);
        }
    }

    // 0x1006797e0, 208 bytes, placed by class name
    // SwipeState::Clear()
    void SwipeState::Clear() {
        Language* local_20;
        undefined4 local_14;

        SetComponent((_func_decltype_nullptr*)this);
        SetStartPosition(this, 0, 0);
        SetLastPosition(this, 0, 0);
        SetFullScreenResolution(0, 0);
        local_14 = 0;
        std::chrono::duration<long long, std::ratio<1l, 1000000000l>>::duration<int>((int*)&local_20, (type*)&local_14);
        SetLanguage(local_20);
        SetHorizontallySwiped(this, false);
        SetReadyAnim(false);
        SetDeadZoneVertical(this, 0);
        SetStatus();
        SetStopThreshold(this, 0.0);
        SetDeceleration(this, 1.0);
        ClearSwipeDeltaHistory(this);
        SetUseAsyncOptimisedPath(false);
        SetDriftDelta(this, 0.0, 0.0);
    }

    // 0x1006798b0, 288 bytes, placed by class name
    // SwipeState::InitDrift()
    void SwipeState::InitDrift() {
        long* plVar1;
        bool bVar3;
        long lVar4;
        float fVar5;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL> local_78[16];
        ring_buffer_iterator local_68[16];
        SwipeDelta local_58;
        duration<long long, std::ratio<1l, 1000000000l>> local_40[8];
        int local_38;
        int local_34;

        if (IsDriftingEnabled(this) != '\0') {
            new (local_40) SwipeDelta();
            eastl::ring_buffer<EntityWaypoint, eastl::vector<EntityWaypoint, BucketAllocatorEASTL>,
                               BucketAllocatorEASTL>::end();
            eastl::ring_buffer<SwipeDelta, eastl::vector<SwipeDelta, eastl::allocator>, eastl::allocator>::end();
            bVar3 = eastl::operator!=(local_78, local_68);
            if (bVar3) {
                do {
                    plVar1 =
                        (long*)eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(local_78);
                    local_58.field_0 = *plVar1;
                    local_58._8_8_ = plVar1[1];
                    SwipeDelta::operator+=((SwipeDelta*)local_40, &local_58);
                    eastl::ring_buffer_iterator<SwipeDelta, SwipeDelta*, SwipeDelta&,
                                                eastl::vector<SwipeDelta, eastl::allocator>>::
                    operator++((ring_buffer_iterator<SwipeDelta, SwipeDelta*, SwipeDelta&,
                                                     eastl::vector<SwipeDelta, eastl::allocator>>*)local_78);
                    bVar3 = eastl::operator!=(local_78, local_68);
                } while (bVar3);
            }
            SetDriftSpeed(this, (float)local_38, (float)local_34);
            lVar4 = std::chrono::duration<long long, std::ratio<1l, 1000000000l>>::count(local_40);
            if (lVar4 < 1) {
                fVar5 = 1.0;
            } else {
                fVar5 = 1.0 / (float)lVar4;
            }
            ScaleDriftSpeed(this, fVar5);
            SetUseAsyncOptimisedPath(true);
        }
        (&field_72)->clear();
    }

    // 0x100679ac0, 528 bytes, placed by class name
    // SwipeState::UpdateSwipe(int, int, std::chrono::duration<long long, std::ratio<1l, 1000000000l> >)
    /* SwipeState::UpdateSwipe(int, int, std::chrono::duration<long long, std::ratio<1l,
   1000000000l> >) */

    undefined8 SwipeState::UpdateSwipe(int param_1, int param_2, undefined8 param_4) {
        uint uVar2;
        Component* this_00;
        ComponentSwipeConfig* this_01;
        shared_ptr local_60;
        undefined8 local_50;
        undefined4 local_48;
        undefined4 uStack_44;
        undefined8 local_40;
        int local_38;
        int local_34;

        new (&local_48) math::Vector2T<int>();
        local_60.shared_from_this();
        if (!operator==(&local_60, (_func_decltype_nullptr*)0)) {
            new (&local_38) oldscape::sidebars::SideBarData(param_1 - m_lastPosition, param_2 - field_28);
            SetLastPosition(this, param_1, param_2);
            this_00 = (Component*)shared_ptr<Component>::operator->((shared_ptr<Component>*)&local_60);
            this_01 = (ComponentSwipeConfig*)this_00->GetSwipeConfig();
            uVar2 = this_01->GetDirectionMask();
            if (((0 < local_38) && ((uVar2 & 1) == 0)) || ((local_38 < 0 && ((uVar2 & 2) == 0)))) {
                field_32 = 0;
                field_40 = 0;
                m_horizontallySwiped = false;
                local_38 = 0;
            }
            if (((0 < local_34) && ((uVar2 & 4) == 0)) || ((local_34 < 0 && ((uVar2 & 8) == 0)))) {
                field_36 = 0;
                field_44 = 0;
                field_56 = false;
                local_34 = 0;
            }
            math::Vector2T<int>::operator+=((Vector2T<int>*)&field_32, (Vector2T*)&local_38);
            if (field_56 == false) {
                if ((((int)field_36 < -m_deadZoneVertical) && ((uVar2 & 8) != 0)) ||
                    ((m_deadZoneVertical < (int)field_36 && ((uVar2 & 4) != 0)))) {
                    m_deadZoneVertical = 0;
                    field_56 = true;
                }
            }
            if (m_horizontallySwiped == false) {
                if ((((int)field_64 < (int)field_32) && ((uVar2 & 1) != 0)) ||
                    (((int)field_32 < (int)-field_64 && ((uVar2 & 2) != 0)))) {
                    field_64 = 0;
                    m_horizontallySwiped = true;
                }
            }
            local_40._0_4_ = field_40;
            local_40._4_4_ = field_44;
            if (field_56 != false) {
                local_40 = CONCAT44(local_40._4_4_ + local_34, (int)local_40);
            }
            if (m_horizontallySwiped != false) {
                local_40 = CONCAT44(local_40._4_4_, (int)local_40 + local_38);
            }
            local_50 = math::operator-((Vector2T*)&local_40, (Vector2T*)&field_40);
            eastl::pair<int, unsigned int>::operator=((pair<int, unsigned int>*)&local_48, (pair*)&local_50);
            AddToSwipeDeltaHistory(this, param_4, local_48, uStack_44);
            eastl::pair<int, unsigned int>::operator=((pair<int, unsigned int>*)&field_40, (pair*)&local_40);
        }
        local_60.~shared_ptr();
        return CONCAT44(uStack_44, local_48);
    }

    // 0x100679d30, 304 bytes, placed by class name
    // SwipeState::UpdateDrift(std::chrono::duration<long long, std::ratio<1l, 1000000000l> >)
    /* SwipeState::UpdateDrift(std::chrono::duration<long long, std::ratio<1l, 1000000000l> >)
    */

    undefined8 SwipeState::UpdateDrift(undefined8 param_2) {
        long lVar1;
        float fVar2;
        undefined8 local_50;
        undefined1 local_48[16];
        undefined1 local_38[16];
        float local_1c;
        int local_18;
        int iStack_14;

        local_50 = param_2;
        new (&local_18) math::Vector2T<int>();
        math::Vector2T<float>::operator*=((Vector2T<float>*)&m_driftSpeed, 1.0 - field_152);
        local_48 = ZEXT416((uint)m_driftSpeed);
        local_1c = (float)::abs(m_driftSpeed);
        local_38 = ZEXT416((uint)field_136);
        fVar2 = (float)::abs(field_136);
        if ((m_stopThreshold <= local_1c) || (m_stopThreshold <= fVar2)) {
            lVar1 = local_50.count();
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
            Clear(this);
        }
        return CONCAT44(iStack_14, local_18);
    }

} // namespace jag::ui
