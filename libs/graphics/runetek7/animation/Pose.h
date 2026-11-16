// libs/graphics/runetek7/animation/Pose.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.graphics

namespace jag {
    // 0x10099a7d0, 32 bytes, inline, placed by debug map only (low confidence)
    // Array<HardCodedSprites::SpriteReference, eastl::allocator>* placement_new<Array<HardCodedSprites::SpriteReference, eastl::allocator>, unsigned long>(void*, unsigned long&&)
    Array*
    jag::placement_new<Array<HardCodedSprites::SpriteReference, eastl::allocator>, unsigned long>(void* param_1,
                                                                                                  ulong* param_2) {
        Array<HardCodedSprites::SpriteReference, eastl::allocator>::Array(param_1, *param_2);
        return param_1;
    }

    // 0x10099a7f0, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<Array<HardCodedSprites::SpriteReference, eastl::allocator> >* placement_new<ref_counter_shared<Array<HardCodedSprites::SpriteReference, eastl::allocator> >, int, Array<HardCodedSprites::SpriteReference, eastl::allocator>*&>(void*, int&&, Array<HardCodedSprites::SpriteReference, eastl::allocator>*&)
    ref_counter_shared*
    jag::placement_new<ref_counter_shared<Array<HardCodedSprites::SpriteReference, eastl::allocator>>, int,
                       Array<HardCodedSprites::SpriteReference, eastl::allocator>*&>(void* param_1, int* param_2,
                                                                                     Array** param_3) {
        ref_counter_shared<Array<HardCodedSprites::SpriteReference, eastl::allocator>>::ref_counter_shared(
            param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x10099aa20, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<Array<HardCodedSprites::SpriteReference, eastl::allocator> >::ref_counter_shared(unsigned long, Array<HardCodedSprites::SpriteReference, eastl::allocator>*): jumps straight to the base-object constructor

    // 0x10099aa30, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<Array<HardCodedSprites::SpriteReference, eastl::allocator> >::ref_counter_shared(unsigned long, Array<HardCodedSprites::SpriteReference, eastl::allocator>*)
    void ref_counter_shared<Array<HardCodedSprites::SpriteReference, eastl::allocator>>::ref_counter_shared(
        ref_counter_shared<Array<HardCodedSprites::SpriteReference, eastl::allocator>>* this, ulong param_1,
        Array* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee73d8 + 16;
        *(ulong*)(this + 16) = param_1;
        *(Array**)(this + 24) = param_2;
    }

    // 0x10099aa70, 80 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<Array<HardCodedSprites::SpriteReference, eastl::allocator> >::DeleteData()
    void ref_counter_shared<Array<HardCodedSprites::SpriteReference, eastl::allocator>>::DeleteData(
        ref_counter_shared<Array<HardCodedSprites::SpriteReference, eastl::allocator>>* this) {
        ulong uVar1;
        long lVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar2 = 0;
                uVar1 = 0;
                do {
                    ((*(long*)(this + 24) + lVar2))->~Array();
                    uVar1 = uVar1 + 1;
                    lVar2 = lVar2 + 24;
                } while (uVar1 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

} // namespace jag

namespace jag::graphics {
    // 0x10099a150, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // JointPose::JointPose(JointPose const&): jumps straight to the base-object constructor

    // 0x10099a150: the linker folded this into JointPose::JointPose(JointPose const&), which has identical code
    JointPose::JointPose(JointPose&&);

    // 0x10099a160, 48 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // JointPose::JointPose(JointPose const&)
    /* JointPose::JointPose(JointPose&&) */

    void JointPose::JointPose(JointPose* param_1) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;

        new (this) math::QuaternionT<float>(param_1);
        uVar1 = param_1->field_16;
        uVar2 = param_1->field_24;
        uVar3 = param_1->field_40;
        field_32 = param_1->field_32;
        field_40 = uVar3;
        field_16 = uVar1;
        field_24 = uVar2;
    }

    // 0x10099a160: the linker folded this into JointPose::JointPose(JointPose const&), which has identical code
    JointPose::JointPose(JointPose&&);

} // namespace jag::graphics
