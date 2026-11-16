// libs/oldscape/jagex3/dash3d/Skeleton.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.jagex3

#include "Skeleton.h"

namespace jag::oldscape::dash3d {
    // 0x100d41cd0, 4 bytes, __const
    Skeleton::LIGHTWEIGHT_JOINTS = 0;

    // 0x1016c60f0, 16 bytes, __common; set at startup by ___cxx_global_var_init.43
    shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> Skeleton::NULL_JOINT =
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>((_func_decltype_nullptr*)0);

    // 0x1002ed6f0, 176 bytes, placed by class name and debug map
    // Skeleton::Animate(graphics::animation::OldscapeAnimKeyFrameSet&, int, Array<bool, eastl::allocator> const&, bool)
    void Skeleton::Animate(OldscapeAnimKeyFrameSet* param_1, int param_2, Array* param_3, bool param_4) {
        char* pcVar1;
        int iVar2;
        char cVar3;
        Array<shared_ptr<graphics::animation::OldscapeJoint>, eastl::allocator>* this_00;
        shared_ptr<graphics::animation::OldscapeJoint>* psVar4;
        shared_ptr<graphics::animation::OldscapeJoint>* this_01;
        ulong uVar5;

        this_00 = (Array<shared_ptr<graphics::animation::OldscapeJoint>, eastl::allocator>*)GetJoints(this);
        this_01 = (shared_ptr<graphics::animation::OldscapeJoint>*)this_00->data();
        psVar4 = (shared_ptr<graphics::animation::OldscapeJoint>*)this_00->end();
        if (this_01 != psVar4) {
            uVar5 = 0;
            do {
                cVar3 = param_3->empty();
                if ((cVar3 != '\0') || (pcVar1 = (char*)Array<bool, eastl::allocator>::operator[](
                                            (Array<bool, eastl::allocator>*)param_3, uVar5),
                                        (bool)*pcVar1 == param_4)) {
                    iVar2 = shared_ptr<graphics::animation::OldscapeJoint>::operator*(this_01);
                    graphics::animation::OldscapeAnimKeyFrameSet::SetJointLocal(
                        (int)param_1, (OldscapeJoint*)(ulong)(uint)param_2, iVar2, (int)uVar5);
                }
                uVar5 = uVar5 + 1;
                this_01 = this_01 + 16;
            } while (this_01 != psVar4);
        }
    }

    // 0x1002ed7e0, 112 bytes, placed by class name and debug map
    // Skeleton::Animate(graphics::animation::OldscapeAnimKeyFrameSet&, int)
    void Skeleton::Animate(OldscapeAnimKeyFrameSet* param_1, int param_2) {
        Array<bool, eastl::allocator> local_40[24];

        Array<bool, eastl::allocator>::Array(local_40);
        Animate(this, param_1, param_2, (Array*)local_40, false);
        local_40->~Array();
    }

    // 0x1002ed850, 48 bytes, placed by class name and debug map
    // Skeleton::GetJoint(int)
    undefined1* Skeleton::GetJoint(int param_1) {
        int iVar1;
        undefined1* puVar2;

        iVar1 = GetNumOfJoints(this);
        if (param_1 < iVar1) {
            puVar2 = (undefined1*)Array<shared_ptr<graphics::animation::OldscapeJoint>, eastl::allocator>::operator[](
                (Array<shared_ptr<graphics::animation::OldscapeJoint>, eastl::allocator>*)this, (long)param_1);
        } else {
            puVar2 = &NULL_JOINT;
        }
        return puVar2;
    }

    // 0x1002edb90, 16 bytes, placed by class name
    // Skeleton::GetNumOfJoints() const
    void Skeleton::GetNumOfJoints() {
        end();
    }

    // 0x1002f4950, 224 bytes, base-object constructor, placed by class name
    // Skeleton::Skeleton(PacketJ<Array<unsigned char, eastl::allocator> >&, int)
    void Skeleton::Skeleton(PacketJ* param_1, int param_2) {
        byte bVar1;
        long lVar2;
        shared_ptr<graphics::animation::OldscapeJoint>* this_00;
        ulong uVar3;
        ulong uVar4;
        shared_ptr local_40;

        new (this) Array<shared_ptr<graphics::animation::OldscapeJoint>, eastl::allocator>();
        set_max_size((long)param_2, 1);
        bVar1 = param_1->g1();
        field_24 = (uint)bVar1;
        lVar2 = end();
        if (lVar2 != 0) {
            uVar4 = 0;
            do {
                make_shared<graphics::animation::OldscapeJoint, int&, PacketJ<Array<unsigned char, eastl::allocator>>&,
                            bool const&>((jag*)&local_40, (int*)&field_24, param_1, (bool*)&LIGHTWEIGHT_JOINTS);
                this_00 = (shared_ptr<graphics::animation::OldscapeJoint>*)
                    Array<shared_ptr<graphics::animation::OldscapeJoint>, eastl::allocator>::operator[](
                        (Array<shared_ptr<graphics::animation::OldscapeJoint>, eastl::allocator>*)this, uVar4);
                shared_ptr<graphics::animation::OldscapeJoint>::operator=(this_00, &local_40);
                local_40.~shared_ptr();
                uVar4 = uVar4 + 1;
                uVar3 = end();
            } while (uVar4 < uVar3);
        }
        BuildJointHierarchy(this);
    }

    // 0x1002f4cf0, 128 bytes, placed by class name
    // Skeleton::BuildJointHierarchy()
    void Skeleton::BuildJointHierarchy() {
        shared_ptr<graphics::animation::OldscapeJoint>* this_00;
        shared_ptr<graphics::animation::OldscapeJoint>* psVar1;
        int* piVar2;
        shared_ptr* psVar3;
        long lVar4;

        this_00 = (shared_ptr<graphics::animation::OldscapeJoint>*)data();
        psVar1 = (shared_ptr<graphics::animation::OldscapeJoint>*)end();
        for (; this_00 != psVar1; this_00 = this_00 + 16) {
            piVar2 = (int*)shared_ptr<graphics::animation::OldscapeJoint>::operator->(this_00);
            if (-1 < *piVar2) {
                piVar2 = (int*)shared_ptr<graphics::animation::OldscapeJoint>::operator->(this_00);
                psVar3 =
                    (shared_ptr*)Array<shared_ptr<graphics::animation::OldscapeJoint>, eastl::allocator>::operator[](
                        (Array<shared_ptr<graphics::animation::OldscapeJoint>, eastl::allocator>*)this, (long)*piVar2);
                lVar4 = shared_ptr<graphics::animation::OldscapeJoint>::operator->(this_00);
                shared_ptr<graphics::animation::OldscapeJoint>::operator=(
                    (shared_ptr<graphics::animation::OldscapeJoint>*)(lVar4 + 8), psVar3);
            }
        }
    }

    // 0x1002f4d70, 16 bytes, complete-object constructor, placed by class name
    // Skeleton::Skeleton(PacketJ<Array<unsigned char, eastl::allocator> >&, int): jumps straight to the base-object constructor

    // 0x1002f4de0, 16 bytes, placed by class name
    // Skeleton::GetJoints() const
    Skeleton* Skeleton::GetJoints() {
        return this;
    }

    // 0x10033df80, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.43
    void ___cxx_global_var_init_43() {
        new (&Skeleton::NULL_JOINT) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
        ___cxa_atexit(PTR__shared_ptr_100ee5538, &Skeleton::NULL_JOINT, 4294967296);
    }

} // namespace jag::oldscape::dash3d
