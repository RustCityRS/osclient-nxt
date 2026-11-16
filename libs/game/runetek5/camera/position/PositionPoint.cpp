// libs/game/runetek5/camera/position/PositionPoint.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "PositionPoint.h"

namespace jag::game {
    // 0x100022b10: the linker folded this into oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    PositionPoint::~PositionPoint();

    // 0x100029ea0: the linker folded this into oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long), which has identical code
    PositionPoint::GetFinishTriggers(eastl::fixed_vector<int, 2ul, true, eastl::allocator>&);

    // 0x10002a770: the linker folded this into void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*), which has identical code
    PositionPoint::~PositionPoint();

    // 0x10004a690: the linker folded this into oldscape::option::ScriptOption<bool, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    PositionPoint::~PositionPoint();

    // 0x1004491e0: the linker folded this into math::Sphere2D::IsValid() const, which has identical code
    PositionPoint::Ready() const;

    // 0x100617850, 80 bytes, placed by class name and debug map
    // PositionPoint::ProcessServerUpdate(PacketT<Array<unsigned char, BucketAllocatorEASTL> >&, std::function<shared_ptr<Entity> (CameraTrackableType, int)> const&)
    /* PositionPoint::ProcessServerUpdate(PacketT<Array<unsigned char,
   BucketAllocatorEASTL> >&, std::function<shared_ptr<Entity>
   (CameraTrackableType, int)> const&) */

    void PositionPoint::ProcessServerUpdate(PacketT* param_1, function* param_2) {
        Vector3T<double> local_48[24];
        Vector3T<float> local_30[16];

        field_12 = '\x01';
        math::Vector3T<float>::Vector3T(local_30, param_1, false);
        math::Vector3T<double>::Vector3T<float>(local_48, (Vector3T*)local_30);
        math::Vector3T<double>::operator=((Vector3T<double>*)field_40, (Vector3T*)local_48);
    }

    // 0x1006178a0, 64 bytes, placed by class name and debug map
    // PositionPoint::GetPositionData(PositionData&, double)
    void PositionPoint::GetPositionData(PositionData* param_1, double param_2) {
        if ((*(code*)field_0[4])() != '\0') {
            *(undefined1**)param_1 = field_16;
            *(undefined1**)(param_1 + 8) = field_40;
            *(undefined1**)(param_1 + 16) = field_64;
        }
    }

    // 0x1006178e0, 112 bytes, placed by class name and debug map
    // PositionPoint::GetPositionFine(CoordFine&, unsigned long long) const
    void PositionPoint::GetPositionFine(CoordFine* param_1, ulonglong param_2) {
        math* this_00;
        AABB local_50;
        undefined8 local_38[2];

        param_1->field_0 = field_88;
        new (&local_50) oldscape::dash3d::ModelLit::AABB();
        this_00 = (math*)(*(code*)field_0[10])(this, &local_50, param_2);
        local_38[0] = math::Vector3FromVector3T<double>(this_00, (Vector3T*)&local_50);
        (&param_1->field_4, (Vector3T*)local_38)->SetXYZ();
    }

    // 0x100617950, 128 bytes, placed by class name and debug map
    // PositionPoint::SetDestination(CoordFine const&)
    void PositionPoint::SetDestination(CoordFine* param_1) {
        Vector3T<double> local_40[24];

        field_12 = '\x01';
        math::Vector3T<double>::Vector3T<float>(local_40, (Vector3T*)&param_1->field_4);
        math::Vector3T<double>::operator=((Vector3T<double>*)field_40, (Vector3T*)local_40);
        if (field_88 == 4294967295) {
            math::Vector3T<double>::Vector3T<float>(local_40, (Vector3T*)&param_1->field_4);
            math::Vector3T<double>::operator=((Vector3T<double>*)field_16, (Vector3T*)local_40);
            field_64->SetToZero();
        }
        field_88 = param_1->field_0;
    }

    // 0x1006179d0, 336 bytes, placed by class name and debug map
    // PositionPoint::TestAndResolveCollision(HeightMap const*, LinkMap const*, bool, bool)
    void PositionPoint::TestAndResolveCollision(HeightMap* param_1, LinkMap* param_2, bool param_3, bool param_4) {
        double dVar1;
        char cVar2;
        double* pdVar3;
        undefined* puVar4;
        uint uVar5;
        undefined7 in_register_00000081;
        AABB local_60;
        uint local_44;
        double local_40;
        int local_34;

        cVar2 = (*(code*)field_0[4])();
        if ((((cVar2 != '\0') && (param_1 != (HeightMap*)0)) && (param_3)) && (m_groundCollision != false)) {
            local_40 = (double)CONCAT44(local_40._4_4_, (int)CONCAT71(in_register_00000081, param_4));
            new (&local_60) oldscape::dash3d::ModelLit::AABB();
            (*(code*)field_0[12])(this);
            local_44 = field_88;
            pdVar3 = (double*)math::Vector3T<double>::operator[]((Vector3T<double>*)&local_60, 0);
            dVar1 = *pdVar3;
            pdVar3 = (double*)math::Vector3T<double>::operator[]((Vector3T<double>*)&local_60, 2);
            uVar5 = local_44;
            cVar2 = param_2->IsLinkBelow((uint)((ulong)(long)dVar1 >> 7) & 33554431,
                                         (uint)((ulong)(long)*pdVar3 >> 7) & 33554431);
            if (cVar2 != '\0') {
                uVar5 = field_88 + 1;
            }
            pdVar3 = (double*)math::Vector3T<double>::operator[]((Vector3T<double>*)&local_60, 0);
            dVar1 = *pdVar3;
            pdVar3 = (double*)math::Vector3T<double>::operator[]((Vector3T<double>*)&local_60, 2);
            puVar4 = (undefined*)param_1->GetFineHeight(&local_34, uVar5, (int)dVar1, (int)*pdVar3, 1, local_40._0_1_);
            if (puVar4 != DataStatus::NOTLOADED) {
                local_34 = local_34 + 128;
                pdVar3 = (double*)math::Vector3T<double>::operator[]((Vector3T<double>*)&local_60, 1);
                local_40 = (double)local_34;
                if (*pdVar3 <= local_40 && local_40 != *pdVar3) {
                    pdVar3 = (double*)math::Vector3T<double>::operator[]((Vector3T<double>*)field_40, 1);
                    *pdVar3 = local_40;
                }
            }
        }
    }

    // 0x100617b20, 192 bytes, placed by class name and debug map
    // PositionPoint::ToString(eastl::fixed_string<char, 512, true, eastl::allocator>&) const
    void PositionPoint::ToString(fixed_string* param_1) {
        char* pcVar1;
        undefined1 local_a0[120];
        undefined8 local_28;

        local_28 = *(undefined8*)PTR____stack_chk_guard_100ee9d98;
        CoordFine::CoordFine<double>((CoordFine*)local_a0, 0, (Vector3T*)field_40);
        new ((local_a0 + 16)) eastl::fixed_string<char, 64, true, eastl::allocator>();
        pcVar1 = CoordFine::ToString<64, true>((CoordFine*)local_a0, (fixed_string*)(local_a0 + 16));
        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::sprintf(
            (char*)param_1, "{ PositionPoint : %s) }", pcVar1);
        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::begin();
        /* WARNING: Subroutine does not return */
        ((local_a0 + 16))->~fixed_string();
    }

    // 0x1006199c0: the linker folded this into PositionPoint::GetPosition(math::Vector3T<double>&, unsigned long long) const, which has identical code
    PositionPoint::GetScaledPosition(math::Vector3T<double>&, unsigned long long, float) const;

} // namespace jag::game
