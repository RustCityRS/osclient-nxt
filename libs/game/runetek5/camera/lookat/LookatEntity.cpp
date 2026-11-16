// libs/game/runetek5/camera/lookat/LookatEntity.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "LookatEntity.h"

namespace jag::game {
    // 0x100029ea0: the linker folded this into oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long), which has identical code
    LookatEntity::GetFinishTriggers(eastl::fixed_vector<int, 2ul, true, eastl::allocator>&);

    // 0x100102fc0: the linker folded this into oldscape::rs2lib::InputField::GetPlaceholderContents() const, which has identical code
    AABB LookatEntity::GetCurrentLookat() const;

    // 0x10014d2f0: the linker folded this into oldscape::ApplicationContext::GetScreenRatio(), which has identical code
    LookatEntity::GetZRotation() const;

    // 0x10036ce20: the linker folded this into eastl::optional<eastl::vector_set<unsigned short, eastl::less<unsigned short>, eastl::allocator, eastl::vector<unsigned short, eastl::allocator> > >::operator bool() const, which has identical code
    LookatEntity::Ready() const;

    // 0x100619950: the linker folded this into PositionEntity::GetPositionEntity() const, which has identical code
    LookatEntity::GetLookatEntity() const;

    // 0x10061c9e0, 208 bytes, placed by class name and debug map
    // LookatEntity::ProcessServerUpdate(PacketT<Array<unsigned char, BucketAllocatorEASTL> >&, std::function<shared_ptr<Entity> (CameraTrackableType, int)> const&)
    /* LookatEntity::ProcessServerUpdate(PacketT<Array<unsigned char,
   BucketAllocatorEASTL> >&, std::function<shared_ptr<Entity>
   (CameraTrackableType, int)> const&) */

    void LookatEntity::ProcessServerUpdate(PacketT* param_1, function* param_2) {
        byte bVar1;
        char cVar2;
        ushort uVar3;
        Vector3T<float> local_58[16];
        shared_ptr local_48;

        bVar1 = param_1->g1();
        uVar3 = param_1->g2();
        field_32 = (uint)bVar1;
        field_36 = (uint)uVar3;
        std::function<shared_ptr<Entity>(CameraTrackableType, int)>::operator()(&local_48, param_2, (uint)bVar1);
        weak_ptr<Entity>::operator=((weak_ptr<Entity>*)&field_16, &local_48);
        local_48.~shared_ptr();
        math::Vector3T<float>::Vector3T(local_58, param_1, false);
        math::Vector3T<double>::Vector3T<float>((Vector3T<double>*)&local_48, (Vector3T*)local_58);
        math::Vector3T<double>::operator=((Vector3T<double>*)field_48, (Vector3T*)&local_48);
        cVar2 = param_1->g1();
        field_72 = cVar2 == '\x01';
        field_40 = 1;
    }

    // 0x10061cae0, 96 bytes, placed by class name and debug map
    // LookatEntity::UpdateLookAtEntity(std::function<shared_ptr<Entity> (CameraTrackableType, int)> const&)
    /* LookatEntity::UpdateLookAtEntity(std::function<shared_ptr<Entity>
   (CameraTrackableType, int)> const&) */

    void LookatEntity::UpdateLookAtEntity(function* param_1) {
        shared_ptr local_28;

        if ((field_40 != '\0') && (field_32 != 4294967295)) {
            std::function<shared_ptr<Entity>(CameraTrackableType, int)>::operator()(&local_28, param_1, field_32,
                                                                                    field_36);
            weak_ptr<Entity>::operator=((weak_ptr<Entity>*)&field_16, &local_28);
            local_28.~shared_ptr();
        }
    }

    // 0x10061cb40, 144 bytes, placed by class name and debug map
    // LookatEntity::SetLookatEntity(shared_ptr<Entity> const&, math::Vector3T<double> const&, bool)
    void LookatEntity::SetLookatEntity(shared_ptr* param_1, Vector3T* param_2, bool param_3) {
        uint uVar1;
        long* plVar3;
        Entity* this_00;

        field_40 = 1;
        weak_ptr<Entity>::operator=((weak_ptr<Entity>*)&field_16, param_1);
        plVar3 = (long*)shared_ptr<Entity>::operator->((shared_ptr<Entity>*)param_1);
        uVar1 = (**(code**)(*plVar3 + 224))(plVar3);
        field_32 = uVar1;
        plVar3 = (long*)shared_ptr<Entity>::operator->((shared_ptr<Entity>*)param_1);
        uVar1 = (**(code**)(*plVar3 + 232))(plVar3);
        field_36 = uVar1;
        math::Vector3T<double>::operator=((Vector3T<double>*)field_48, param_2);
        field_72 = param_3;
        this_00 = (Entity*)shared_ptr<Entity>::operator->((shared_ptr<Entity>*)param_1);
        field_152 = this_00->GetHeightMapLevel();
    }

    // 0x10061cbd0, 208 bytes, placed by class name and debug map
    // LookatEntity::GetLookatData(LookatData&)
    ulong LookatEntity::GetLookatData(LookatData* param_1) {
        bool bVar2;
        undefined7 extraout_var;
        long* plVar3;
        ulong uVar4;
        Vector3T<double> local_60[24];
        shared_ptr local_48;
        undefined8 local_38[2];

        if ((*(code*)field_0[13])() == '\0') {
            uVar4 = 0;
        } else {
            weak_ptr<oldscape::rs2lib::IfType>::lock();
            bVar2 = shared_ptr::operator_cast_to_bool(&local_48);
            uVar4 = CONCAT71(extraout_var, bVar2) & 4294967295;
            if (bVar2) {
                plVar3 = (long*)shared_ptr<Entity>::operator->((shared_ptr<Entity>*)&local_48);
                local_38[0] = (**(code**)(*plVar3 + 144))(plVar3);
                math::Vector3T<double>::Vector3T<float>(local_60, (Vector3T*)local_38);
                math::Vector3T<double>::operator=((Vector3T<double>*)field_128, (Vector3T*)local_60);
                *(undefined1**)(param_1 + 8) = m_currentLookat;
                *(undefined1**)param_1 = field_104;
                *(undefined1**)(param_1 + 16) = field_128;
                *(undefined1**)(param_1 + 24) = field_160;
            }
            local_48.~shared_ptr();
        }
        return uVar4;
    }

    // 0x10061cca0, 192 bytes, placed by class name and debug map
    // LookatEntity::GetLookatPosition(math::Vector3T<double>&) const
    void LookatEntity::GetLookatPosition(Vector3T* param_1) {
        Entity* this_00;
        GraphNode* this_01;
        QuaternionT* pQVar1;
        bool bVar2;
        QuaternionT<double> local_50[32];
        shared_ptr local_30;

        math::Vector3T<double>::operator=((Vector3T<double>*)param_1, (Vector3T*)field_48);
        if (field_72 != false) {
            weak_ptr<oldscape::rs2lib::IfType>::lock();
            bVar2 = shared_ptr::operator_cast_to_bool(&local_30);
            if (!bVar2) {
                local_30.~shared_ptr();
                return;
            }
            this_00 = (Entity*)shared_ptr<Entity>::operator->((shared_ptr<Entity>*)&local_30);
            this_01 = (GraphNode*)this_00->GetNode();
            pQVar1 = (QuaternionT*)this_01->GetRotation();
            math::QuaternionT<double>::QuaternionT(local_50, pQVar1);
            math::Vector3T<double>::operator*=((Vector3T<double>*)param_1, (QuaternionT*)local_50);
            local_30.~shared_ptr();
            if (!bVar2) {
                return;
            }
        }
        math::Vector3T<double>::operator+=((Vector3T<double>*)param_1, (Vector3T*)m_currentLookat);
    }

    // 0x10061cd70, 48 bytes, placed by class name and debug map
    // LookatEntity::SetCurrentLookat(math::Vector3T<double> const&)
    void LookatEntity::SetCurrentLookat(Vector3T* param_1) {
        math::Vector3T<double>::operator=((Vector3T<double>*)m_currentLookat, param_1);
        math::Vector3T<double>::operator=((Vector3T<double>*)field_104, param_1);
    }

    // 0x10061cda0, 192 bytes, placed by class name and debug map
    // LookatEntity::GetDestinationLookat(math::Vector3T<double>&) const
    void LookatEntity::GetDestinationLookat(Vector3T* param_1) {
        Entity* this_00;
        GraphNode* this_01;
        QuaternionT* pQVar1;
        bool bVar2;
        QuaternionT<double> local_50[32];
        shared_ptr local_30;

        math::Vector3T<double>::operator=((Vector3T<double>*)param_1, (Vector3T*)field_48);
        if (field_72 != false) {
            weak_ptr<oldscape::rs2lib::IfType>::lock();
            bVar2 = shared_ptr::operator_cast_to_bool(&local_30);
            if (!bVar2) {
                local_30.~shared_ptr();
                return;
            }
            this_00 = (Entity*)shared_ptr<Entity>::operator->((shared_ptr<Entity>*)&local_30);
            this_01 = (GraphNode*)this_00->GetNode();
            pQVar1 = (QuaternionT*)this_01->GetRotation();
            math::QuaternionT<double>::QuaternionT(local_50, pQVar1);
            math::Vector3T<double>::operator*=((Vector3T<double>*)param_1, (QuaternionT*)local_50);
            local_30.~shared_ptr();
            if (!bVar2) {
                return;
            }
        }
        math::Vector3T<double>::operator+=((Vector3T<double>*)param_1, (Vector3T*)field_128);
    }

    // 0x10061ce60, 80 bytes, placed by class name and debug map
    // LookatEntity::GetLookatFine(CoordFine&) const
    void LookatEntity::GetLookatFine(CoordFine* param_1) {
        math* this_00;
        CoordFine* pCVar1;
        undefined8 local_20[2];

        param_1->field_0 = field_152;
        pCVar1 = param_1;
        this_00 = (math*)(*(code*)field_0[4])();
        local_20[0] = math::Vector3FromVector3T<double>(this_00, (Vector3T*)pCVar1);
        (&param_1->field_4, (Vector3T*)local_20)->SetXYZ();
    }

    // 0x10061ceb0, 336 bytes, placed by class name and debug map
    // LookatEntity::ToString(eastl::fixed_string<char, 512, true, eastl::allocator>&) const
    undefined8 LookatEntity::ToString(fixed_string* param_1) {
        char cVar2;
        int iVar3;
        HitmarkType* this_00;
        Entity* pEVar4;
        Vector3T* pVVar5;
        undefined8 uVar6;
        char* pcVar7;
        undefined1 local_a8[16];
        fixed_string<char, 64, true, eastl::allocator> local_88[104];
        long local_20;

        local_20 = *(long*)PTR____stack_chk_guard_100ee9d98;
        weak_ptr<oldscape::rs2lib::IfType>::lock();
        if (((local_a8 + 16))->operator_cast_to_bool()) {
            this_00 = (HitmarkType*)shared_ptr<Entity>::operator->((shared_ptr<Entity>*)(local_a8 + 16));
            iVar3 = this_00->GetDuration();
            pEVar4 = (Entity*)shared_ptr<Entity>::operator->((shared_ptr<Entity>*)(local_a8 + 16));
            pVVar5 = (Vector3T*)pEVar4->GetWorldPosition();
            new (local_a8) CoordFine(iVar3, pVVar5);
            eastl::fixed_string<char, 64, true, eastl::allocator>::fixed_string(local_88);
            pEVar4 = (Entity*)shared_ptr<Entity>::operator->((shared_ptr<Entity>*)(local_a8 + 16));
            cVar2 = pEVar4->GetEntityType();
            uVar6 = GetEntityTypeString((int)cVar2);
            pcVar7 = CoordFine::ToString<64, true>((CoordFine*)local_a8, (fixed_string*)local_88);
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::
                sprintf((char*)param_1, "{ LookatEntity : %s @ %s }", uVar6, pcVar7);
            /* WARNING: Subroutine does not return */
            local_88->~fixed_string();
        }
        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::sprintf(
            (char*)param_1, "{ LookatEntity : expired }");
        uVar6 =
            eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::begin();
        ((local_a8 + 16))->~shared_ptr();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_20) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return uVar6;
    }

} // namespace jag::game
