// libs/graphics/runetek7/animation/asm/AnimationStateDescriptor.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "AnimationStateDescriptor.h"

namespace jag::graphics {
    // 0x100009ca0: the linker folded this into eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first(), which has identical code
    AnimationStateDescriptor::GetName() const;

    // 0x100955110, 400 bytes, base-object constructor, placed by class name and debug map
    // AnimationStateDescriptor::AnimationStateDescriptor(Json::Value const&)
    void AnimationStateDescriptor::AnimationStateDescriptor(Value* param_1) {
        char cVar1;
        Value* pVVar2;
        char* pcVar3;
        AnimationDescriptor local_128;
        long local_30;

        local_30 = *(long*)PTR____stack_chk_guard_100ee9d98;
        new (this) eastl::string();
        std::unique_ptr<BlendTreeNodeDescriptor, std::default_delete<BlendTreeNodeDescriptor>>::unique_ptr<true, void>(
            (unique_ptr<BlendTreeNodeDescriptor, std::default_delete<BlendTreeNodeDescriptor>>*)&field_32);
        new (field_48) AnimationDescriptor();
        pVVar2 = (Value*)Json::Value::operator[](param_1, "Name");
        pcVar3 = (char*)Json::Value::asCString(pVVar2);
        assign(pcVar3);
        cVar1 = Json::Value::isMember(param_1, "Animation");
        if (cVar1 == '\0') {
            cVar1 = Json::Value::isMember(param_1, "BlendTree");
            if (cVar1 == '\0') {
                field_288 = 0;
            } else {
                field_288 = 2;
                pVVar2 = (Value*)Json::Value::operator[](param_1, "BlendTree");
                local_128.FromJSON(pVVar2);
                std::unique_ptr<BlendTreeNodeDescriptor, std::default_delete<BlendTreeNodeDescriptor>>::operator=(
                    (unique_ptr<BlendTreeNodeDescriptor, std::default_delete<BlendTreeNodeDescriptor>>*)&field_32,
                    (unique_ptr*)&local_128);
                local_128.~unique_ptr();
            }
        } else {
            field_288 = 1;
            pVVar2 = (Value*)Json::Value::operator[](param_1, "Animation");
            new (&local_128) AnimationDescriptor(pVVar2);
            AnimationDescriptor::operator=((AnimationDescriptor*)field_48, &local_128);
            local_128.~AnimationDescriptor();
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_30) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100955cf0, 16 bytes, complete-object constructor, placed by class name
    // AnimationStateDescriptor::AnimationStateDescriptor(Json::Value const&): jumps straight to the base-object constructor

    // 0x100955d00, 384 bytes, base-object constructor, placed by class name
    // AnimationStateDescriptor::AnimationStateDescriptor(PacketT<Array<unsigned char, eastl::allocator> >&)
    void AnimationStateDescriptor::AnimationStateDescriptor(PacketT* param_1) {
        int iVar1;
        AnimationDescriptor local_128;
        long local_30;

        local_30 = *(long*)PTR____stack_chk_guard_100ee9d98;
        new (this) eastl::string();
        std::unique_ptr<BlendTreeNodeDescriptor, std::default_delete<BlendTreeNodeDescriptor>>::unique_ptr<true, void>(
            (unique_ptr<BlendTreeNodeDescriptor, std::default_delete<BlendTreeNodeDescriptor>>*)&field_32);
        new (field_48) AnimationDescriptor();
        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gStringCP1252ToUTF8<eastl::string>(
            (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)&local_128, SUB81(param_1, 0));
        eastl::string::operator=((eastl::string*)this, (basic_string*)&local_128);
        local_128.~basic_string();
        iVar1 = param_1->g4();
        field_288 = iVar1;
        if (iVar1 != 0) {
            if (iVar1 == 1) {
                new (&local_128) AnimationDescriptor(param_1);
                AnimationDescriptor::operator=((AnimationDescriptor*)field_48, &local_128);
                local_128.~AnimationDescriptor();
            } else {
                if (iVar1 != 2) {
                    /* WARNING: Subroutine does not return */
                    LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                    "runetek7/animation/asm/AnimationStateDescriptor.cpp",
                                    68, "Unhandled animation type in animation state detected");
                }
                local_128.FromPacket(param_1);
                std::unique_ptr<BlendTreeNodeDescriptor, std::default_delete<BlendTreeNodeDescriptor>>::operator=(
                    (unique_ptr<BlendTreeNodeDescriptor, std::default_delete<BlendTreeNodeDescriptor>>*)&field_32,
                    (unique_ptr*)&local_128);
                local_128.~unique_ptr();
            }
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_30) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100955f90, 16 bytes, complete-object constructor, placed by class name
    // AnimationStateDescriptor::AnimationStateDescriptor(PacketT<Array<unsigned char, eastl::allocator> >&): jumps straight to the base-object constructor

    // 0x100955fa0, 304 bytes, placed by class name
    // AnimationStateDescriptor::Create(VariableList&)
    AnimationStateDescriptor* AnimationStateDescriptor::Create(VariableList* param_1) {
        long* plVar1;
        AnimState* this_00;
        VariableList* in_RDX;
        AnimationStateResourceList local_60;
        MakeUniquePool<AnimState, 4096> local_38[8];
        unique_ptr local_30[8];

        std::unique_ptr<AnimState, MakeUniquePool<AnimState, 4096>::UniquePoolDeleter>::unique_ptr<true, void>(
            (unique_ptr<AnimState, MakeUniquePool<AnimState, 4096>::UniquePoolDeleter>*)this);
        if (*(int*)&param_1[2].field_32 == 1) {
            (&param_1->field_48, in_RDX)->InitialiseCallbackFunctions();
            MakeUniquePool<AnimState, 4096>::MakeUnique<AnimationDescriptor&>(
                (MakeUniquePool<AnimState, 4096>*)&local_60, (AnimationDescriptor*)&param_1->field_48);
        } else {
            if (*(int*)&param_1[2].field_32 == 2) {
                new (&local_60) AnimationStateResourceList();
                plVar1 =
                    (long*)std::unique_ptr<BlendTreeNodeDescriptor, std::default_delete<BlendTreeNodeDescriptor>>::
                    operator->(
                        (unique_ptr<BlendTreeNodeDescriptor, std::default_delete<BlendTreeNodeDescriptor>>*)&param_1
                            ->field_32);
                (**(code**)(*plVar1 + 24))(local_30, plVar1, &local_60);
                MakeUniquePool<AnimState, 4096>::MakeUnique<
                    std::unique_ptr<BlendTreeNode, std::default_delete<BlendTreeNode>>, AnimationStateResourceList>(
                    local_38, local_30, &local_60);
                std::unique_ptr<AnimState, MakeUniquePool<AnimState, 4096>::UniquePoolDeleter>::operator=(
                    (unique_ptr<AnimState, MakeUniquePool<AnimState, 4096>::UniquePoolDeleter>*)this,
                    (unique_ptr*)local_38);
                local_38->~unique_ptr();
                local_30->~unique_ptr();
                local_60.~AnimationStateResourceList();
                goto LAB_10095606d;
            }
            MakeUniquePool<AnimState, 4096>::MakeUnique<>((MakeUniquePool<AnimState, 4096>*)&local_60);
        }
        std::unique_ptr<AnimState, MakeUniquePool<AnimState, 4096>::UniquePoolDeleter>::operator=(
            (unique_ptr<AnimState, MakeUniquePool<AnimState, 4096>::UniquePoolDeleter>*)this, (unique_ptr*)&local_60);
        local_60.~unique_ptr();
    LAB_10095606d:
        this_00 =
            (AnimState*)std::unique_ptr<AnimState, MakeUniquePool<AnimState, 4096>::UniquePoolDeleter>::operator->(
                (unique_ptr<AnimState, MakeUniquePool<AnimState, 4096>::UniquePoolDeleter>*)this);
        this_00->SetName(param_1);
        return this;
    }

    // 0x100956460, 608 bytes, placed by class name
    // AnimationStateDescriptor::ToString(unsigned int) const
    AnimationStateDescriptor* AnimationStateDescriptor::ToString(uint param_1) {
        long* plVar2;
        uint in_EDX;
        undefined4 in_register_00000034;
        basic_string* pbVar3;
        debug_helpers local_c0[32];
        eastl local_a0[32];
        eastl local_80[32];
        debug_helpers local_60[32];
        eastl local_40[32];

        pbVar3 = (basic_string*)CONCAT44(in_register_00000034, param_1);
        new (this) eastl::string();
        local_60->GetTabbedSpaces(in_EDX);
        local_c0->GetTabbedSpaces(in_EDX + 1);
        eastl::operator+(local_40, (basic_string*)local_60, (value_type*)"Animation State\n");
        eastl::string::operator=((eastl::string*)this, (basic_string*)local_40);
        local_40->~basic_string();
        eastl::operator+(local_40, (basic_string*)local_60, (value_type*)"{\n");
        eastl::string::operator+=((eastl::string*)this, (basic_string*)local_40);
        local_40->~basic_string();
        eastl::operator+(local_80, (basic_string*)local_c0, (value_type*)"Name: ");
        eastl::operator+(local_a0, (basic_string*)local_80, pbVar3);
        eastl::operator+(local_40, (basic_string*)local_a0, (value_type*)&DAT_100e3824c);
        eastl::string::operator+=((eastl::string*)this, (basic_string*)local_40);
        local_40->~basic_string();
        local_a0->~basic_string();
        local_80->~basic_string();
        if (*(int*)(pbVar3 + 288) == 2) {
            if (!((pbVar3 + 32))->operator_cast_to_bool()) {
                /* WARNING: Subroutine does not return */
                LogAssert("m_blendTreeDesc",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "animation/asm/AnimationStateDescriptor.cpp",
                          121, (char*)0);
            }
            plVar2 =
                (long*)
                    std::unique_ptr<BlendTreeNodeDescriptor, std::default_delete<BlendTreeNodeDescriptor>>::operator->(
                        (unique_ptr<BlendTreeNodeDescriptor, std::default_delete<BlendTreeNodeDescriptor>>*)(pbVar3 +
                                                                                                             32));
            (**(code**)(*plVar2 + 32))(local_40, plVar2, in_EDX + 1);
            eastl::string::operator+=((eastl::string*)this, (basic_string*)local_40);
        } else {
            local_40->ToString(param_1 + 48);
            eastl::string::operator+=((eastl::string*)this, (basic_string*)local_40);
        }
        local_40->~basic_string();
        eastl::operator+(local_40, (basic_string*)local_60, (value_type*)"}\n");
        eastl::string::operator+=((eastl::string*)this, (basic_string*)local_40);
        local_40->~basic_string();
        local_c0->~basic_string();
        local_60->~basic_string();
        return this;
    }

} // namespace jag::graphics
