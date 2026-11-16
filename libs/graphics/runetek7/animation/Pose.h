// libs/graphics/runetek7/animation/Pose.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.graphics

namespace jag {
    // 0x10099a7d0
    Array<HardCodedSprites::SpriteReference>*
    placement_new<Array<HardCodedSprites::SpriteReference>, unsigned long>(void* arg1, unsigned long&& arg2) {
        new (arg1) Array<HardCodedSprites::SpriteReference>(arg2);
        return arg1;
    }

    // 0x10099a7f0
    ref_counter_shared<Array<HardCodedSprites::SpriteReference>>*
    placement_new<ref_counter_shared<Array<HardCodedSprites::SpriteReference>>, int,
                  Array<HardCodedSprites::SpriteReference>*&>(void* arg1, int&& arg2,
                                                              Array<HardCodedSprites::SpriteReference>*& arg3) {
        new (arg1) ref_counter_shared<Array<HardCodedSprites::SpriteReference>>((long)*arg2, arg3);
        return arg1;
    }

    // 0x10099aa30
    ref_counter_shared<Array<HardCodedSprites::SpriteReference>>::ref_counter_shared(
        unsigned long arg1, Array<HardCodedSprites::SpriteReference>* spriteReferences)
        : ref_counter_base() {
        *(uint8_t**)this = PTR_vtable_100ee73d8 + 16;
        *(unsigned long*)(this + 16) = arg1;
        *(Array<HardCodedSprites::SpriteReference>**)(this + 24) = spriteReferences;
    }

    // 0x10099aa70
    void ref_counter_shared<Array<HardCodedSprites::SpriteReference>>::DeleteData() {
        unsigned long uVar1;
        long lVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar2 = 0;
                uVar1 = 0;
                do {
                    ((Array<HardCodedSprites::SpriteReference>*)(*(long*)(this + 24) + lVar2))->~Array();
                    uVar1 = uVar1 + 1;
                    lVar2 = lVar2 + 24;
                } while (uVar1 < *(unsigned long*)(this + 16));
            }
            *(uint64_t*)(this + 24) = 0;
        }
    }

} // namespace jag

namespace jag::graphics {
    // 0x10099a160
    JointPose::JointPose(const JointPose& jointPose) : math::QuaternionT<float>(jointPose) {
        uint64_t uVar1 = jointPose.field_16;
        uint64_t uVar2 = jointPose.field_24;
        uint64_t uVar3 = jointPose.field_40;
        field_32 = jointPose.field_32;
        field_40 = uVar3;
        field_16 = uVar1;
        field_24 = uVar2;
    }

    // 0x10099a160: JointPose::JointPose(JointPose&&) has the same machine code as JointPose::JointPose(JointPose const&)

} // namespace jag::graphics
