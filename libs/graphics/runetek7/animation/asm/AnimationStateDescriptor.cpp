// libs/graphics/runetek7/animation/asm/AnimationStateDescriptor.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "AnimationStateDescriptor.h"

namespace jag::graphics {
    // 0x100009ca0: AnimationStateDescriptor::GetName() const has the same machine code as eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first()

    // 0x100955110
    AnimationStateDescriptor::AnimationStateDescriptor(const Json::Value& value) : eastl::string() {
        AnimationDescriptor local_128;

        field_32.unique_ptr<true, void>();
        new (field_48) AnimationDescriptor();
        Value* pVVar2 = &value["Name"];
        assign(pVVar2->asCString());
        if (!(value.isMember("Animation"))) {
            if (!(value.isMember("BlendTree"))) {
                *(uint32_t*)(field_48 + 240) = 0;
            } else {
                *(uint32_t*)(field_48 + 240) = 2;
                pVVar2 = &value["BlendTree"];
                local_128.FromJSON(*pVVar2);
                field_32 = local_128;
            }
        } else {
            *(uint32_t*)(field_48 + 240) = 1;
            pVVar2 = &value["Animation"];
            local_128 = AnimationDescriptor(*pVVar2);
            *field_48 = local_128;
        }
    }

    // 0x100955d00
    AnimationStateDescriptor::AnimationStateDescriptor(PacketT<Array<unsigned char>>& arg1) : eastl::string() {
        AnimationDescriptor local_128;

        field_32.unique_ptr<true, void>();
        new (field_48) AnimationDescriptor();
        local_128.gStringCP1252ToUTF8<eastl::string>((uint8_t)arg1);
        *this = &local_128;
        int iVar1 = arg1.g4();
        *(int*)(field_48 + 240) = iVar1;
        if (iVar1 != 0) {
            if (iVar1 == 1) {
                local_128 = AnimationDescriptor(arg1);
                *field_48 = local_128;
            } else {
                if (iVar1 != 2) {
                    LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                    "runetek7/animation/asm/AnimationStateDescriptor.cpp",
                                    68, "Unhandled animation type in animation state detected");
                }
                local_128 = BlendTreeNodeDescriptor::FromPacket(arg1);
                field_32 = local_128;
            }
        }
    }

    // 0x100955fa0
    auto AnimationStateDescriptor::Create(VariableList& variableList) {
        auto result;
        long* plVar1;
        AnimationStateResourceList local_60;
        unique_ptr<BlendTreeNode, std::default_delete<BlendTreeNode> _> local_38;
        unique_ptr<BlendTreeNode> local_30;

        result.unique_ptr<true, void>();
        if (*(int*)(field_48 + 240) == 1) {
            field_48->InitialiseCallbackFunctions(variableList);
            MakeUniquePool<AnimState, 4096>::MakeUnique<AnimationDescriptor&>((AnimationDescriptor*)&local_60);
        } else {
            if (*(int*)(field_48 + 240) == 2) {
                local_60 = AnimationStateResourceList();
                plVar1 = (long*)field_32.operator->();
                (**(void (**)(...))(*plVar1 + 24))(&local_30, plVar1, &local_60, variableList);
                MakeUniquePool<AnimState, 4096>::MakeUnique<std::unique_ptr<BlendTreeNode>, AnimationStateResourceList>(
                    &local_38, &local_30);
                result = local_38;
                goto LAB_10095606d;
            }
            MakeUniquePool<AnimState, 4096>::MakeUnique<>();
        }
        result = local_60;
    LAB_10095606d:
        ((AnimState*)(result).operator->())->SetName(*this);
        return result;
    }

    // 0x100956460
    auto AnimationStateDescriptor::ToString(unsigned int arg1) const {
        long* plVar2;
        eastl::string local_a0;
        eastl::string local_80;
        ReturnValue local_40;

        auto result;
        auto local_60 = debug_helpers::GetTabbedSpaces(arg1);
        unsigned int arg1_00 = arg1 + 1;
        auto local_c0 = debug_helpers::GetTabbedSpaces(arg1_00);
        local_40 + local_60;
        result = &local_40;
        local_40 + local_60;
        result += &local_40;
        local_80 + local_c0;
        local_a0 + local_80;
        local_40 + local_a0;
        result += &local_40;
        if (*(int*)(field_48 + 240) == 2) {
            if ((&field_32)->operator_cast_to_bool() == '\0') {
                LogAssert("m_blendTreeDesc",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "animation/asm/AnimationStateDescriptor.cpp",
                          121, nullptr);
            }
            plVar2 = (long*)field_32.operator->();
            (**(void (**)(...))(*plVar2 + 32))(&local_40, plVar2, arg1_00);
            result += &local_40;
        } else {
            local_40 = field_48->ToString(arg1_00);
            result += &local_40;
        }
        local_40 + local_60;
        result += &local_40;
        return result;
    }

} // namespace jag::graphics
