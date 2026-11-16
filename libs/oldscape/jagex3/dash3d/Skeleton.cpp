// libs/oldscape/jagex3/dash3d/Skeleton.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.jagex3

#include "Skeleton.h"

namespace jag::oldscape::dash3d {
    // 0x100d41cd0
    int32_t Skeleton::LIGHTWEIGHT_JOINTS = 0;

    // 0x1016c60f0, set at startup by ___cxx_global_var_init.43
    shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> Skeleton::NULL_JOINT =
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x1002ed6f0
    void Skeleton::Animate(graphics::animation::OldscapeAnimKeyFrameSet& oldscapeAnimKeyFrameSet, int arg2,
                           const Array<bool>& arg3, bool arg4) {
        char* pcVar1;
        int arg3_00;
        unsigned long arg1;

        auto this_00 = GetJoints();
        auto this_01 = this_00->data();
        auto psVar3 = this_00->end();
        if (this_01 != psVar3) {
            arg1 = 0;
            do {
                if ((arg3.empty() != '\0') || (pcVar1 = (char*)arg3[arg1], (bool)*pcVar1 == arg4)) {
                    arg3_00 = **this_01;
                    graphics::animation::OldscapeAnimKeyFrameSet::SetJointLocal(
                        (int)oldscapeAnimKeyFrameSet, *((OldscapeJoint*)(unsigned long)(unsigned int)arg2), arg3_00,
                        (int)arg1);
                }
                arg1 = arg1 + 1;
                this_01 = this_01 + 16;
            } while (this_01 != psVar3);
        }
    }

    // 0x1002ed7e0
    void Skeleton::Animate(graphics::animation::OldscapeAnimKeyFrameSet& oldscapeAnimKeyFrameSet, int arg2) {

        Array<bool> local_40;
        Animate(oldscapeAnimKeyFrameSet, arg2, local_40, false);
    }

    // 0x1002ed850
    uint8_t* Skeleton::GetJoint(int arg1) {
        uint8_t* puVar2;

        int iVar1 = GetNumOfJoints();
        if (arg1 < iVar1) {
            puVar2 = (uint8_t*)(*this)[(long)arg1];
        } else {
            puVar2 = &NULL_JOINT;
        }
        return puVar2;
    }

    // 0x1002edb90
    void Skeleton::GetNumOfJoints() const {
        end();
    }

    // 0x1002f4950
    Skeleton::Skeleton(PacketJ<Array<unsigned char>>& packetJ, int arg2)
        : Array<shared_ptr<graphics::animation::OldscapeJoint>>() {
        shared_ptr<graphics::animation::OldscapeJoint>* this_00;
        unsigned long uVar3;
        unsigned long arg1;
        ReturnValue local_40;

        set_max_size((long)arg2, 1);
        uint8_t bVar1 = packetJ.g1();
        field_24 = (unsigned int)bVar1;
        if (end() != 0) {
            arg1 = 0;
            do {
                make_shared<graphics::animation::OldscapeJoint, int&, PacketJ<Array<unsigned char>>&, bool const&>(
                    &local_40, (int*)&field_24, packetJ, (bool*)&LIGHTWEIGHT_JOINTS);
                this_00 = (shared_ptr<graphics::animation::OldscapeJoint>*)(*this)[arg1];
                *this_00 = local_40;
                arg1 = arg1 + 1;
                uVar3 = end();
            } while (arg1 < uVar3);
        }
        BuildJointHierarchy();
    }

    // 0x1002f4cf0
    void Skeleton::BuildJointHierarchy() {
        int* piVar2;
        shared_ptr<graphics::animation::OldscapeJoint>* oldscapeJoint;
        long lVar3;

        auto this_00 = data();
        auto psVar1 = end();
        for (; this_00 != psVar1; this_00 = this_00 + 16) {
            piVar2 = (int*)(*this_00).operator->();
            if (-1 < *piVar2) {
                piVar2 = (int*)(*this_00).operator->();
                oldscapeJoint = (shared_ptr<graphics::animation::OldscapeJoint>*)(*this)[(long)*piVar2];
                lVar3 = (*this_00).operator->();
                (*((lVar3 + 8))) = *oldscapeJoint;
            }
        }
    }

    // 0x1002f4de0
    Skeleton* Skeleton::GetJoints() const {
        return this;
    }

} // namespace jag::oldscape::dash3d
