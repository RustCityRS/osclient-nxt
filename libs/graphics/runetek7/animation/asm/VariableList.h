// libs/graphics/runetek7/animation/asm/VariableList.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class VariableList {
    public:
        VariableList();
        ~VariableList();
        long size() const;
        void AddUintVariable(char const*, unsigned int, unsigned int, unsigned int);
        void HasUintVariable(char const*) const;
        void SetUintVariable(char const*, unsigned int);
        HasVariable(char const*) const;
        void GetUintVariable(char const*);
        void AddFloatVariable(char const*, float, float, float);
        void GetFloatVariable(char const*);
        void HasFloatVariable(char const*) const;

        // data members, from how the methods use this: 128 bytes
        long field_0; // offset 0
        long field_8; // offset 8
        char _unknown_16[112];
    };

    // 0x1003f0680, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // VariableList::VariableList(): jumps straight to the base-object constructor

    // 0x1003f0850, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // VariableList::~VariableList(): jumps straight to the base-object destructor

    // 0x1003f2cc0, 48 bytes, inline, placed by class name
    // VariableList::size() const
    long VariableList::size() {
        long lVar1;
        long lVar2;

        lVar1 = size();
        lVar2 = (&field_40)->size();
        return lVar2 + lVar1;
    }

    // 0x1003f2cf0, 320 bytes, inline, placed by class name
    // VariableList::AddUintVariable(char const*, unsigned int, unsigned int, unsigned int)
    void VariableList::AddUintVariable(char* param_1, uint param_2, uint param_3, uint param_4) {
        undefined4 in_register_00000034;
        fixed_string<char, 16, true, eastl::allocator> local_68[56];
        undefined8 local_30;

        local_30 = *(undefined8*)PTR____stack_chk_guard_100ee9d98;
        eastl::fixed_string<char, 16, true, eastl::allocator>::fixed_string(
            local_68, (char*)CONCAT44(in_register_00000034, param_2));
        param_1->count(local_68);
        /* WARNING: Subroutine does not return */
        local_68->~fixed_string();
    }

    // 0x1003f6ab0, 128 bytes, inline, placed by class name
    // VariableList::HasUintVariable(char const*) const
    void VariableList::HasUintVariable(char* param_1) {
        fixed_string<char, 16, true, eastl::allocator> local_58[56];
        undefined8 local_20;

        local_20 = *(undefined8*)PTR____stack_chk_guard_100ee9d98;
        eastl::fixed_string<char, 16, true, eastl::allocator>::fixed_string(local_58, param_1);
        count(local_58);
        /* WARNING: Subroutine does not return */
        local_58->~fixed_string();
    }

    // 0x1003f6b30, 208 bytes, inline, placed by class name
    // VariableList::SetUintVariable(char const*, unsigned int)
    void VariableList::SetUintVariable(char* param_1, uint param_2) {
        undefined4 in_register_00000034;
        fixed_string<char, 16, true, eastl::allocator> local_68[56];
        undefined8 local_30;

        local_30 = *(undefined8*)PTR____stack_chk_guard_100ee9d98;
        eastl::fixed_string<char, 16, true, eastl::allocator>::fixed_string(
            local_68, (char*)CONCAT44(in_register_00000034, param_2));
        param_1->count(local_68);
        /* WARNING: Subroutine does not return */
        local_68->~fixed_string();
    }

    // 0x1003feae0, 192 bytes, base-object constructor, inline, placed by class name
    // VariableList::VariableList()
    void VariableList::VariableList() {
        new (this) eastl::vector_map<
            eastl::fixed_string<char, 16, true, eastl::allocator>, unsigned int,
            eastl::less<eastl::fixed_string<char, 16, true, eastl::allocator>>, eastl::allocator,
            eastl::vector<eastl::pair<eastl::fixed_string<char, 16, true, eastl::allocator>, unsigned int>,
                          eastl::allocator>>();
        new (&field_40)
            eastl::vector_map<eastl::fixed_string<char, 16, true, eastl::allocator>, float,
                              eastl::less<eastl::fixed_string<char, 16, true, eastl::allocator>>, eastl::allocator,
                              eastl::vector<eastl::pair<eastl::fixed_string<char, 16, true, eastl::allocator>, float>,
                                            eastl::allocator>>();
        new (&field_80)
            eastl::vector_map<eastl::fixed_string<char, 16, true, eastl::allocator>,
                              eastl::pair<unsigned int, unsigned int>,
                              eastl::less<eastl::fixed_string<char, 16, true, eastl::allocator>>, eastl::allocator,
                              eastl::vector<eastl::pair<eastl::fixed_string<char, 16, true, eastl::allocator>,
                                                        eastl::pair<unsigned int, unsigned int>>,
                                            eastl::allocator>>();
        new (&field_120) eastl::vector_map<
            eastl::fixed_string<char, 16, true, eastl::allocator>, eastl::pair<float, float>,
            eastl::less<eastl::fixed_string<char, 16, true, eastl::allocator>>, eastl::allocator,
            eastl::vector<eastl::pair<eastl::fixed_string<char, 16, true, eastl::allocator>, eastl::pair<float, float>>,
                          eastl::allocator>>();
        reserve(32);
        (&field_40, 32)->reserve();
        (&field_80, 32)->reserve();
        (&field_120, 32)->reserve();
    }

    // 0x1003ffd30, 64 bytes, base-object destructor, inline, placed by class name
    // VariableList::~VariableList()
    void VariableList::~VariableList() {
        (&field_120)->~vector_map();
        (&field_80)->~vector_map();
        (&field_40)->~vector_map();
        ~vector_map();
    }

    // 0x10095a920, 48 bytes, inline, placed by class name
    // VariableList::HasVariable(char const*) const
    undefined4 VariableList::HasVariable(char* param_1) {
        char cVar1;
        undefined4 uVar2;

        cVar1 = HasUintVariable(this, param_1);
        uVar2 = 1;
        if (cVar1 == '\0') {
            uVar2 = HasFloatVariable(this, param_1);
        }
        return uVar2;
    }

    // 0x10095a950, 208 bytes, inline, placed by class name
    // VariableList::GetUintVariable(char const*)
    void VariableList::GetUintVariable(char* param_1) {
        fixed_string<char, 16, true, eastl::allocator> local_60[56];
        undefined8 local_28;

        local_28 = *(undefined8*)PTR____stack_chk_guard_100ee9d98;
        eastl::fixed_string<char, 16, true, eastl::allocator>::fixed_string(local_60, param_1);
        count(local_60);
        /* WARNING: Subroutine does not return */
        local_60->~fixed_string();
    }

    // 0x10095b760, 352 bytes, inline, placed by class name
    // VariableList::AddFloatVariable(char const*, float, float, float)
    void VariableList::AddFloatVariable(char* param_1, float param_2, float param_3, float param_4) {
        fixed_string<char, 16, true, eastl::allocator> local_68[56];
        undefined8 local_30;

        local_30 = *(undefined8*)PTR____stack_chk_guard_100ee9d98;
        eastl::fixed_string<char, 16, true, eastl::allocator>::fixed_string(local_68, param_1);
        (&field_40, (fixed_string*)local_68)->count();
        /* WARNING: Subroutine does not return */
        local_68->~fixed_string();
    }

    // 0x10095b940, 208 bytes, inline, placed by class name
    // VariableList::GetFloatVariable(char const*)
    void VariableList::GetFloatVariable(char* param_1) {
        fixed_string<char, 16, true, eastl::allocator> local_60[56];
        undefined8 local_28;

        local_28 = *(undefined8*)PTR____stack_chk_guard_100ee9d98;
        eastl::fixed_string<char, 16, true, eastl::allocator>::fixed_string(local_60, param_1);
        (&field_40, (fixed_string*)local_60)->count();
        /* WARNING: Subroutine does not return */
        local_60->~fixed_string();
    }

    // 0x10095f3e0, 128 bytes, inline, placed by class name
    // VariableList::HasFloatVariable(char const*) const
    void VariableList::HasFloatVariable(char* param_1) {
        fixed_string<char, 16, true, eastl::allocator> local_58[56];
        undefined8 local_20;

        local_20 = *(undefined8*)PTR____stack_chk_guard_100ee9d98;
        eastl::fixed_string<char, 16, true, eastl::allocator>::fixed_string(local_58, param_1);
        (&field_40, (fixed_string*)local_58)->count();
        /* WARNING: Subroutine does not return */
        local_58->~fixed_string();
    }

} // namespace jag::graphics

namespace jag {
    // 0x1003f0880, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // PathingEntityModels::~PathingEntityModels(): jumps straight to the base-object destructor

} // namespace jag
