// libs/graphics/runetek7/animation/asm/AnimationStateTransitionDescriptor.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "AnimationStateTransitionDescriptor.h"

namespace jag::graphics {
    // 0x100009ca0: the linker folded this into eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first(), which has identical code
    AnimationStateTransitionDescriptor::GetFrom() const;

    // 0x10002d850: the linker folded this into oldscape::option::Option<int>::GetDefaultValue() const, which has identical code
    AnimationStateTransitionDescriptor::GetTo() const;

    // 0x100059090: the linker folded this into oldscape::FolderSelection::FolderSelectionRequest::~FolderSelectionRequest(), which has identical code
    AnimationStateTransitionDescriptor::SimpleFuncDescriptor::~SimpleFuncDescriptor();

    // 0x1000590a0: the linker folded this into oldscape::FolderSelection::FolderSelectionRequest::~FolderSelectionRequest(), which has identical code
    AnimationStateTransitionDescriptor::SimpleFuncDescriptor::~SimpleFuncDescriptor();

    // 0x10024c420: the linker folded this into oldscape::configdecoder::ParamTypeHelper::ParamVariant::ParamVariant(), which has identical code
    AnimationStateTransitionDescriptor::SimpleFuncDescriptor::SimpleFuncDescriptor();

    // 0x10024c430: the linker folded this into oldscape::configdecoder::ParamTypeHelper::ParamVariant::ParamVariant(), which has identical code
    AnimationStateTransitionDescriptor::SimpleFuncDescriptor::SimpleFuncDescriptor();

    // 0x1004c8de0: the linker folded this into game::VarType::GetDataType() const, which has identical code
    AnimationStateTransitionDescriptor::GetTransitionTimeNS() const;

    // 0x100959a40, 400 bytes, placed by class name and debug map
    // AnimationStateTransitionDescriptor::GetCanTransitionFunc(VariableList&) const
    AnimationStateTransitionDescriptor*
    AnimationStateTransitionDescriptor::GetCanTransitionFunc(VariableList* param_1) {
        uint uVar1;
        char* pcVar3;
        undefined8 uVar4;
        VariableList* in_RDX;
        undefined8 local_38;
        undefined4 local_30;

        if (param_1->field_76 == '\0') {
            std::function<bool()>::function((function<bool()>*)this, (function*)&param_1->field_80);
        } else {
            std::function<bool()>::function((function<bool()>*)this);
            pcVar3 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            if (in_RDX->HasVariable(pcVar3) == '\0') {
                uVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                /* WARNING: Subroutine does not return */
                LogAssert("variables.HasVariable(m_canTransitionDescriptor.m_variable.c_str())",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "animation/asm/AnimationStateTransitionDescriptor.cpp",
                          49, "Variable \"%s\" referenced by transition does not exist in variables list", uVar4);
            }
            pcVar3 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            local_38 = in_RDX->GetUintVariable(pcVar3);
            uVar1 = (uint)param_1[1].field_0;
            if (4 < uVar1) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                "runetek7/animation/asm/AnimationStateTransitionDescriptor.cpp",
                                79, "Unknown Op Value: %i");
            }
            local_30 = *(undefined4*)&param_1[1].field_40;
            switch (uVar1) {
            case 0:
                std::function<bool()>::operator=((function<bool()>*)this, (__4*)&local_38);
                break;
            case 1:
                std::function<bool()>::operator=((function<bool()>*)this, (__5*)&local_38);
                break;
            case 2:
                std::function<bool()>::operator=((function<bool()>*)this, (__6*)&local_38);
                break;
            case 3:
                std::function<bool()>::operator=((function<bool()>*)this, (__7*)&local_38);
                break;
            case 4:
                std::function<bool()>::operator=((function<bool()>*)this, (__8*)&local_38);
            }
        }
        return this;
    }

    // 0x10095a040, 1152 bytes, placed by class name and debug map
    // AnimationStateTransitionDescriptor::ToString(unsigned int) const
    AnimationStateTransitionDescriptor* AnimationStateTransitionDescriptor::ToString(uint param_1) {
        int iVar1;
        uint in_EDX;
        char* pcVar2;
        undefined4 in_register_00000034;
        basic_string* pbVar3;
        eastl local_100[32];
        debug_helpers local_e0[32];
        eastl::string local_c0[32];
        debug_helpers local_a0[32];
        eastl local_80[32];
        eastl local_60[32];
        eastl local_40[32];

        pbVar3 = (basic_string*)CONCAT44(in_register_00000034, param_1);
        eastl::string::basic_string(local_c0);
        iVar1 = *(int*)(pbVar3 + 72);
        if (iVar1 == 2) {
            eastl::string::assign(local_c0, "Smoother Step");
        } else if (iVar1 == 1) {
            eastl::string::assign(local_c0, "Smooth Step");
        } else if (iVar1 == 0) {
            eastl::string::assign(local_c0, "Linear");
        }
        local_e0->GetTabbedSpaces(in_EDX);
        local_a0->GetTabbedSpaces(in_EDX + 1);
        new (this) eastl::string();
        eastl::operator+(local_40, (basic_string*)local_e0, (value_type*)"Transition\n");
        eastl::string::operator=((eastl::string*)this, (basic_string*)local_40);
        local_40->~basic_string();
        eastl::operator+(local_40, (basic_string*)local_e0, (value_type*)"{\n");
        eastl::string::operator+=((eastl::string*)this, (basic_string*)local_40);
        local_40->~basic_string();
        eastl::operator+(local_60, (basic_string*)local_a0, (value_type*)"From: ");
        eastl::operator+(local_80, (basic_string*)local_60, pbVar3);
        eastl::operator+(local_40, (basic_string*)local_80, (value_type*)&DAT_100e3824c);
        eastl::string::operator+=((eastl::string*)this, (basic_string*)local_40);
        local_40->~basic_string();
        local_80->~basic_string();
        local_60->~basic_string();
        eastl::operator+(local_60, (basic_string*)local_a0, (value_type*)"To: ");
        eastl::operator+(local_80, (basic_string*)local_60, pbVar3 + 32);
        eastl::operator+(local_40, (basic_string*)local_80, (value_type*)&DAT_100e3824c);
        eastl::string::operator+=((eastl::string*)this, (basic_string*)local_40);
        local_40->~basic_string();
        local_80->~basic_string();
        local_60->~basic_string();
        eastl::operator+(local_60, (basic_string*)local_a0, (value_type*)"Time (NS): ");
        eastl::to_string(local_100, *(ulonglong*)(pbVar3 + 64));
        eastl::operator+(local_80, (basic_string*)local_60, (basic_string*)local_100);
        eastl::operator+(local_40, (basic_string*)local_80, (value_type*)&DAT_100e3824c);
        eastl::string::operator+=((eastl::string*)this, (basic_string*)local_40);
        local_40->~basic_string();
        local_80->~basic_string();
        local_100->~basic_string();
        local_60->~basic_string();
        eastl::operator+(local_60, (basic_string*)local_a0, (value_type*)"Blend Func: ");
        eastl::operator+(local_80, (basic_string*)local_60, (basic_string*)local_c0);
        eastl::operator+(local_40, (basic_string*)local_80, (value_type*)&DAT_100e3824c);
        eastl::string::operator+=((eastl::string*)this, (basic_string*)local_40);
        local_40->~basic_string();
        local_80->~basic_string();
        local_60->~basic_string();
        eastl::operator+(local_60, (basic_string*)local_a0, (value_type*)"Has transition func: ");
        pcVar2 = "True";
        if (*(int*)(pbVar3 + 72) == 0) {
            pcVar2 = "False";
        }
        eastl::operator+(local_80, (basic_string*)local_60, (value_type*)pcVar2);
        eastl::operator+(local_40, (basic_string*)local_80, (value_type*)&DAT_100e3824c);
        eastl::string::operator+=((eastl::string*)this, (basic_string*)local_40);
        local_40->~basic_string();
        local_80->~basic_string();
        local_60->~basic_string();
        eastl::operator+(local_40, (basic_string*)local_e0, (value_type*)"}\n");
        eastl::string::operator+=((eastl::string*)this, (basic_string*)local_40);
        local_40->~basic_string();
        local_a0->~basic_string();
        local_e0->~basic_string();
        eastl::string::~basic_string(local_c0);
        return this;
    }

    // 0x10095a7c0, 336 bytes, base-object constructor, placed by class name
    // AnimationStateTransitionDescriptor::AnimationStateTransitionDescriptor(PacketT<Array<unsigned char, eastl::allocator> >&)
    void AnimationStateTransitionDescriptor::AnimationStateTransitionDescriptor(PacketT* param_1) {
        undefined8 uVar1;
        undefined4 uVar2;
        bool bVar3;
        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>> local_50[32];

        new (this) eastl::string();
        new (&field_32) eastl::string();
        field_76 = 0;
        std::function<bool()>::function((function<bool()>*)&field_80);
        new (field_128) SimpleFuncDescriptor();
        bVar3 = SUB81(param_1, 0);
        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gStringCP1252ToUTF8<eastl::string>(local_50,
                                                                                                               bVar3);
        eastl::string::operator=((eastl::string*)this, (basic_string*)local_50);
        local_50->~basic_string();
        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gStringCP1252ToUTF8<eastl::string>(local_50,
                                                                                                               bVar3);
        eastl::string::operator=((eastl::string*)&field_32, (basic_string*)local_50);
        local_50->~basic_string();
        uVar1 = param_1->g8();
        m_transitionTimeNS = uVar1;
        uVar2 = param_1->g4();
        field_72 = uVar2;
        field_76 = 1;
        uVar2 = param_1->g4();
        *(undefined4*)field_128 = uVar2;
        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gStringCP1252ToUTF8<eastl::string>(local_50,
                                                                                                               bVar3);
        eastl::string::operator=((eastl::string*)(field_128 + 8), (basic_string*)local_50);
        local_50->~basic_string();
        uVar2 = param_1->g4();
        *(undefined4*)(field_128 + 40) = uVar2;
    }

    // 0x10095a910, 16 bytes, complete-object constructor, placed by class name
    // AnimationStateTransitionDescriptor::AnimationStateTransitionDescriptor(PacketT<Array<unsigned char, eastl::allocator> >&): jumps straight to the base-object constructor

    // 0x10096e6e0, 32 bytes, placed by class name
    // AnimationStateTransitionDescriptor::GetCanTransitionFunc(VariableList&) const::$_4::operator()() const
    /* AnimationStateTransitionDescriptor::GetCanTransitionFunc(VariableList&)
   const::$_4::TEMPNAMEPLACEHOLDERVALUE() const */

    _func_GetCanTransitionFunc_VariableList_ptr* const ::$_4::operator()() {
        return (_func_GetCanTransitionFunc_VariableList_ptr*)(ulong)CONCAT31((int3)((uint) * *(int**)this >> 8),
                                                                             **(int**)this == *(int*)(this + 8));
    }

    // 0x10096f000, 32 bytes, placed by class name
    // AnimationStateTransitionDescriptor::GetCanTransitionFunc(VariableList&) const::$_5::operator()() const
    /* AnimationStateTransitionDescriptor::GetCanTransitionFunc(VariableList&)
   const::$_5::TEMPNAMEPLACEHOLDERVALUE() const */

    _func_GetCanTransitionFunc_VariableList_ptr* const ::$_5::operator()() {
        return (_func_GetCanTransitionFunc_VariableList_ptr*)(ulong)CONCAT31((int3)(**(uint**)this >> 8),
                                                                             *(uint*)(this + 8) < **(uint**)this);
    }

    // 0x10096f920, 32 bytes, placed by class name
    // AnimationStateTransitionDescriptor::GetCanTransitionFunc(VariableList&) const::$_6::operator()() const
    /* AnimationStateTransitionDescriptor::GetCanTransitionFunc(VariableList&)
   const::$_6::TEMPNAMEPLACEHOLDERVALUE() const */

    _func_GetCanTransitionFunc_VariableList_ptr* const ::$_6::operator()() {
        return (_func_GetCanTransitionFunc_VariableList_ptr*)(ulong)CONCAT31((int3)(**(uint**)this >> 8),
                                                                             *(uint*)(this + 8) <= **(uint**)this);
    }

    // 0x100970240, 32 bytes, placed by class name
    // AnimationStateTransitionDescriptor::GetCanTransitionFunc(VariableList&) const::$_7::operator()() const
    /* AnimationStateTransitionDescriptor::GetCanTransitionFunc(VariableList&)
   const::$_7::TEMPNAMEPLACEHOLDERVALUE() const */

    _func_GetCanTransitionFunc_VariableList_ptr* const ::$_7::operator()() {
        return (_func_GetCanTransitionFunc_VariableList_ptr*)(ulong)CONCAT31((int3)(**(uint**)this >> 8),
                                                                             **(uint**)this < *(uint*)(this + 8));
    }

    // 0x100970b60, 32 bytes, placed by class name
    // AnimationStateTransitionDescriptor::GetCanTransitionFunc(VariableList&) const::$_8::operator()() const
    /* AnimationStateTransitionDescriptor::GetCanTransitionFunc(VariableList&)
   const::$_8::TEMPNAMEPLACEHOLDERVALUE() const */

    _func_GetCanTransitionFunc_VariableList_ptr* const ::$_8::operator()() {
        return (_func_GetCanTransitionFunc_VariableList_ptr*)(ulong)CONCAT31((int3)(**(uint**)this >> 8),
                                                                             **(uint**)this <= *(uint*)(this + 8));
    }

} // namespace jag::graphics
